/* Share.c generated by valac 0.28.0, the Vala compiler
 * generated from Share.vala, do not modify */

/* Copyright 2014 Ryan Sipes
*
* This file is part of Solus Journal.
*
* Solus Journal is free software: you can redistribute it
* and/or modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation, either version 2 of the
* License, or (at your option) any later version.
*
* Solus Journal is distributed in the hope that it will be
* useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
* Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with Solus Journal. If not, see http://www.gnu.org/licenses/.
*/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>
#include <libsoup/soup.h>
#include <json-glib/json-glib.h>
#include <stdio.h>
#include <gobject/gvaluecollector.h>


#define SOLUS_JOURNAL_TYPE_SHARE (solus_journal_share_get_type ())
#define SOLUS_JOURNAL_SHARE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOLUS_JOURNAL_TYPE_SHARE, SolusJournalShare))
#define SOLUS_JOURNAL_SHARE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOLUS_JOURNAL_TYPE_SHARE, SolusJournalShareClass))
#define SOLUS_JOURNAL_IS_SHARE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOLUS_JOURNAL_TYPE_SHARE))
#define SOLUS_JOURNAL_IS_SHARE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOLUS_JOURNAL_TYPE_SHARE))
#define SOLUS_JOURNAL_SHARE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOLUS_JOURNAL_TYPE_SHARE, SolusJournalShareClass))

typedef struct _SolusJournalShare SolusJournalShare;
typedef struct _SolusJournalShareClass SolusJournalShareClass;
typedef struct _SolusJournalSharePrivate SolusJournalSharePrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block3Data Block3Data;
#define _solus_journal_share_unref0(var) ((var == NULL) ? NULL : (var = (solus_journal_share_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _json_object_unref0(var) ((var == NULL) ? NULL : (var = (json_object_unref (var), NULL)))
typedef struct _SolusJournalParamSpecShare SolusJournalParamSpecShare;

struct _SolusJournalShare {
	GTypeInstance parent_instance;
	volatile int ref_count;
	SolusJournalSharePrivate * priv;
};

struct _SolusJournalShareClass {
	GTypeClass parent_class;
	void (*finalize) (SolusJournalShare *self);
};

struct _Block3Data {
	int _ref_count_;
	SolusJournalShare* self;
	GtkWindow* window;
};

struct _SolusJournalParamSpecShare {
	GParamSpec parent_instance;
};


extern GtkClipboard* solus_journal_clipboard;
GtkClipboard* solus_journal_clipboard = NULL;
extern gchar* solus_journal_link;
gchar* solus_journal_link = NULL;
static gpointer solus_journal_share_parent_class = NULL;

gpointer solus_journal_share_ref (gpointer instance);
void solus_journal_share_unref (gpointer instance);
GParamSpec* solus_journal_param_spec_share (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void solus_journal_value_set_share (GValue* value, gpointer v_object);
void solus_journal_value_take_share (GValue* value, gpointer v_object);
gpointer solus_journal_value_get_share (const GValue* value);
GType solus_journal_share_get_type (void) G_GNUC_CONST;
enum  {
	SOLUS_JOURNAL_SHARE_DUMMY_PROPERTY
};
void solus_journal_share_generate_paste (SolusJournalShare* self, const gchar* text, GtkWindow* window);
static Block3Data* block3_data_ref (Block3Data* _data3_);
static void block3_data_unref (void * _userdata_);
static void solus_journal_share_on_response (SolusJournalShare* self, GtkDialog* dialog, gint response_id);
static void _solus_journal_share_on_response_gtk_dialog_response (GtkDialog* _sender, gint response_id, gpointer self);
static void ___lambda26_ (Block3Data* _data3_, SoupSession* sess, SoupMessage* mess);
static void ____lambda26__soup_session_callback (SoupSession* session, SoupMessage* msg, gpointer self);
SolusJournalShare* solus_journal_share_new (void);
SolusJournalShare* solus_journal_share_construct (GType object_type);
static void solus_journal_share_finalize (SolusJournalShare* obj);


static gpointer _g_object_ref0 (gpointer self) {
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	return self ? g_object_ref (self) : NULL;
#line 106 "Share.c"
}


static Block3Data* block3_data_ref (Block3Data* _data3_) {
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_atomic_int_inc (&_data3_->_ref_count_);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	return _data3_;
#line 115 "Share.c"
}


static void block3_data_unref (void * _userdata_) {
	Block3Data* _data3_;
	_data3_ = (Block3Data*) _userdata_;
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (g_atomic_int_dec_and_test (&_data3_->_ref_count_)) {
#line 124 "Share.c"
		SolusJournalShare* self;
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
		self = _data3_->self;
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
		_g_object_unref0 (_data3_->window);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
		_solus_journal_share_unref0 (self);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
		g_slice_free (Block3Data, _data3_);
#line 134 "Share.c"
	}
}


static guint8* string_get_data (const gchar* self, int* result_length1) {
	guint8* result;
	guint8* res = NULL;
	gint res_length1 = 0;
	gint _res_size_ = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	guint8* _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	guint8* _tmp4_ = NULL;
	gint _tmp4__length1 = 0;
#line 1300 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, NULL);
#line 1301 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	res = (guint8*) self;
#line 1301 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	res_length1 = -1;
#line 1301 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	_res_size_ = res_length1;
#line 1302 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	_tmp0_ = strlen (self);
#line 1302 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	_tmp1_ = _tmp0_;
#line 1302 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	res_length1 = (gint) _tmp1_;
#line 1302 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	_tmp2_ = res_length1;
#line 1303 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	_tmp3_ = res;
#line 1303 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	_tmp3__length1 = res_length1;
#line 1303 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	_tmp4_ = _tmp3_;
#line 1303 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	_tmp4__length1 = _tmp3__length1;
#line 1303 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	if (result_length1) {
#line 1303 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
		*result_length1 = _tmp4__length1;
#line 179 "Share.c"
	}
#line 1303 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	result = _tmp4_;
#line 1303 "/usr/share/vala-0.28/vapi/glib-2.0.vapi"
	return result;
#line 185 "Share.c"
}


static void _solus_journal_share_on_response_gtk_dialog_response (GtkDialog* _sender, gint response_id, gpointer self) {
#line 53 "/home/logan/Source/Vala/journal/src/Share.vala"
	solus_journal_share_on_response ((SolusJournalShare*) self, _sender, response_id);
#line 192 "Share.c"
}


static gpointer _json_object_ref0 (gpointer self) {
#line 69 "/home/logan/Source/Vala/journal/src/Share.vala"
	return self ? json_object_ref (self) : NULL;
#line 199 "Share.c"
}


static void ___lambda26_ (Block3Data* _data3_, SoupSession* sess, SoupMessage* mess) {
	SolusJournalShare* self;
	JsonParser* parser = NULL;
	JsonParser* _tmp0_ = NULL;
	FILE* _tmp1_ = NULL;
	SoupMessage* _tmp2_ = NULL;
	guint _tmp3_ = 0U;
	guint _tmp4_ = 0U;
	FILE* _tmp5_ = NULL;
	SoupMessage* _tmp6_ = NULL;
	SoupMessageBody* _tmp7_ = NULL;
	gint64 _tmp8_ = 0LL;
	FILE* _tmp9_ = NULL;
	SoupMessage* _tmp10_ = NULL;
	SoupMessageBody* _tmp11_ = NULL;
	guint8* _tmp12_ = NULL;
	gint _tmp12__length1 = 0;
	JsonObject* root_object = NULL;
	JsonNode* _tmp18_ = NULL;
	JsonObject* _tmp19_ = NULL;
	JsonObject* _tmp20_ = NULL;
	gchar* id = NULL;
	const gchar* _tmp21_ = NULL;
	gchar* _tmp22_ = NULL;
	gchar* _tmp23_ = NULL;
	GtkLabel* label = NULL;
	const gchar* _tmp24_ = NULL;
	gchar* _tmp25_ = NULL;
	gchar* _tmp26_ = NULL;
	GtkLabel* _tmp27_ = NULL;
	GtkLabel* _tmp28_ = NULL;
	GtkDialog* dialog = NULL;
	GtkWindow* _tmp29_ = NULL;
	GtkDialog* _tmp30_ = NULL;
	GtkBox* content_area = NULL;
	GtkBox* _tmp31_ = NULL;
	GtkBox* _tmp32_ = NULL;
	GError * _inner_error_ = NULL;
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
	self = _data3_->self;
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_return_if_fail (sess != NULL);
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_return_if_fail (mess != NULL);
#line 59 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp0_ = json_parser_new ();
#line 59 "/home/logan/Source/Vala/journal/src/Share.vala"
	parser = _tmp0_;
#line 60 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp1_ = stdout;
#line 60 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp2_ = mess;
#line 60 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_object_get (_tmp2_, "status-code", &_tmp3_, NULL);
#line 60 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp4_ = _tmp3_;
#line 60 "/home/logan/Source/Vala/journal/src/Share.vala"
	fprintf (_tmp1_, "Status Code: %u\n", _tmp4_);
#line 61 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp5_ = stdout;
#line 61 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp6_ = mess;
#line 61 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp7_ = _tmp6_->response_body;
#line 61 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp8_ = _tmp7_->length;
#line 61 "/home/logan/Source/Vala/journal/src/Share.vala"
	fprintf (_tmp5_, "Message length: %lld\n", _tmp8_);
#line 62 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp9_ = stdout;
#line 62 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp10_ = mess;
#line 62 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp11_ = _tmp10_->response_body;
#line 62 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp12_ = _tmp11_->data;
#line 62 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp12__length1 = (gint) _tmp11_->length;
#line 62 "/home/logan/Source/Vala/journal/src/Share.vala"
	fprintf (_tmp9_, "Data: \n%s\n", (const gchar*) _tmp12_);
#line 283 "Share.c"
	{
		SoupMessage* _tmp13_ = NULL;
		SoupMessageBody* _tmp14_ = NULL;
		guint8* _tmp15_ = NULL;
		gint _tmp15__length1 = 0;
#line 65 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp13_ = mess;
#line 65 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp14_ = _tmp13_->response_body;
#line 65 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp15_ = _tmp14_->data;
#line 65 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp15__length1 = (gint) _tmp14_->length;
#line 65 "/home/logan/Source/Vala/journal/src/Share.vala"
		json_parser_load_from_data (parser, (const gchar*) _tmp15_, (gssize) (-1), &_inner_error_);
#line 65 "/home/logan/Source/Vala/journal/src/Share.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 301 "Share.c"
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		GError* _tmp16_ = NULL;
		const gchar* _tmp17_ = NULL;
#line 64 "/home/logan/Source/Vala/journal/src/Share.vala"
		e = _inner_error_;
#line 64 "/home/logan/Source/Vala/journal/src/Share.vala"
		_inner_error_ = NULL;
#line 67 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp16_ = e;
#line 67 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp17_ = _tmp16_->message;
#line 67 "/home/logan/Source/Vala/journal/src/Share.vala"
		g_warning ("Share.vala:67: Error sharing: %s", _tmp17_);
#line 64 "/home/logan/Source/Vala/journal/src/Share.vala"
		_g_error_free0 (e);
#line 323 "Share.c"
	}
	__finally0:
#line 64 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 64 "/home/logan/Source/Vala/journal/src/Share.vala"
		_g_object_unref0 (parser);
#line 64 "/home/logan/Source/Vala/journal/src/Share.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 64 "/home/logan/Source/Vala/journal/src/Share.vala"
		g_clear_error (&_inner_error_);
#line 64 "/home/logan/Source/Vala/journal/src/Share.vala"
		return;
#line 336 "Share.c"
	}
#line 69 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp18_ = json_parser_get_root (parser);
#line 69 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp19_ = json_node_get_object (_tmp18_);
#line 69 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp20_ = _json_object_ref0 (_tmp19_);
#line 69 "/home/logan/Source/Vala/journal/src/Share.vala"
	root_object = _tmp20_;
#line 70 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp21_ = json_object_get_string_member (root_object, "key");
#line 70 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp22_ = g_strdup (_tmp21_);
#line 70 "/home/logan/Source/Vala/journal/src/Share.vala"
	id = _tmp22_;
#line 72 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp23_ = g_strconcat ("http://hastebin.com/", (const gchar*) id, NULL);
#line 72 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_free0 (solus_journal_link);
#line 72 "/home/logan/Source/Vala/journal/src/Share.vala"
	solus_journal_link = _tmp23_;
#line 73 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp24_ = solus_journal_link;
#line 73 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp25_ = g_strconcat ("Link Pasted on Hastebin:\n", _tmp24_, NULL);
#line 73 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp26_ = _tmp25_;
#line 73 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp27_ = (GtkLabel*) gtk_label_new (_tmp26_);
#line 73 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_object_ref_sink (_tmp27_);
#line 73 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp28_ = _tmp27_;
#line 73 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_free0 (_tmp26_);
#line 73 "/home/logan/Source/Vala/journal/src/Share.vala"
	label = _tmp28_;
#line 74 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp29_ = _data3_->window;
#line 74 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp30_ = (GtkDialog*) gtk_dialog_new_with_buttons ("Hastebin Link", _tmp29_, GTK_DIALOG_MODAL, "Copy to Clipboard", 1, "OK", GTK_RESPONSE_OK, NULL, NULL);
#line 74 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_object_ref_sink (_tmp30_);
#line 74 "/home/logan/Source/Vala/journal/src/Share.vala"
	dialog = _tmp30_;
#line 80 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp31_ = (GtkBox*) gtk_dialog_get_content_area (dialog);
#line 80 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp32_ = _g_object_ref0 (_tmp31_);
#line 80 "/home/logan/Source/Vala/journal/src/Share.vala"
	content_area = _tmp32_;
#line 81 "/home/logan/Source/Vala/journal/src/Share.vala"
	gtk_container_add ((GtkContainer*) content_area, (GtkWidget*) label);
#line 82 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_signal_connect (dialog, "response", (GCallback) _solus_journal_share_on_response_gtk_dialog_response, self);
#line 84 "/home/logan/Source/Vala/journal/src/Share.vala"
	gtk_widget_show_all ((GtkWidget*) dialog);
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_object_unref0 (content_area);
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_object_unref0 (dialog);
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_object_unref0 (label);
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_free0 (id);
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
	_json_object_unref0 (root_object);
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_object_unref0 (parser);
#line 406 "Share.c"
}


static void ____lambda26__soup_session_callback (SoupSession* session, SoupMessage* msg, gpointer self) {
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
	___lambda26_ (self, session, msg);
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
	block3_data_unref (self);
#line 415 "Share.c"
}


void solus_journal_share_generate_paste (SolusJournalShare* self, const gchar* text, GtkWindow* window) {
	Block3Data* _data3_;
	GtkWindow* _tmp0_ = NULL;
	GtkWindow* _tmp1_ = NULL;
	GdkDisplay* display = NULL;
	GtkWindow* _tmp2_ = NULL;
	GdkDisplay* _tmp3_ = NULL;
	GdkDisplay* _tmp4_ = NULL;
	GdkDisplay* _tmp5_ = NULL;
	GtkClipboard* _tmp6_ = NULL;
	GtkClipboard* _tmp7_ = NULL;
	gchar* url = NULL;
	gchar* _tmp8_ = NULL;
	SoupSession* session = NULL;
	SoupSession* _tmp9_ = NULL;
	SoupMessage* message = NULL;
	const gchar* _tmp10_ = NULL;
	SoupMessage* _tmp11_ = NULL;
	SoupMessage* _tmp12_ = NULL;
	const gchar* _tmp13_ = NULL;
	guint8* _tmp14_ = NULL;
	gint _tmp14__length1 = 0;
	guint8* _tmp15_ = NULL;
	gint _tmp15__length1 = 0;
	const gchar* _tmp16_ = NULL;
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_return_if_fail (self != NULL);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_return_if_fail (text != NULL);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_return_if_fail (window != NULL);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	_data3_ = g_slice_new0 (Block3Data);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	_data3_->_ref_count_ = 1;
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	_data3_->self = solus_journal_share_ref (self);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp0_ = window;
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_object_unref0 (_data3_->window);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	_data3_->window = _tmp1_;
#line 31 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp2_ = _data3_->window;
#line 31 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp3_ = gtk_widget_get_display ((GtkWidget*) _tmp2_);
#line 31 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp4_ = _g_object_ref0 (_tmp3_);
#line 31 "/home/logan/Source/Vala/journal/src/Share.vala"
	display = _tmp4_;
#line 34 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp5_ = display;
#line 34 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp6_ = gtk_clipboard_get_for_display (_tmp5_, GDK_SELECTION_CLIPBOARD);
#line 34 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp7_ = _g_object_ref0 (_tmp6_);
#line 34 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_object_unref0 (solus_journal_clipboard);
#line 34 "/home/logan/Source/Vala/journal/src/Share.vala"
	solus_journal_clipboard = _tmp7_;
#line 37 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp8_ = g_strdup ("http://hastebin.com/documents");
#line 37 "/home/logan/Source/Vala/journal/src/Share.vala"
	url = _tmp8_;
#line 40 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp9_ = soup_session_new ();
#line 40 "/home/logan/Source/Vala/journal/src/Share.vala"
	session = _tmp9_;
#line 42 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp10_ = url;
#line 42 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp11_ = soup_message_new ("POST", _tmp10_);
#line 42 "/home/logan/Source/Vala/journal/src/Share.vala"
	message = _tmp11_;
#line 43 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp12_ = message;
#line 43 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp13_ = text;
#line 43 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp14_ = string_get_data (_tmp13_, &_tmp14__length1);
#line 43 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp15_ = _tmp14_;
#line 43 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp15__length1 = _tmp14__length1;
#line 43 "/home/logan/Source/Vala/journal/src/Share.vala"
	soup_message_set_request (_tmp12_, "data", SOUP_MEMORY_COPY, _tmp15_, (gsize) _tmp15__length1);
#line 45 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp16_ = text;
#line 45 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (g_strcmp0 (_tmp16_, "") == 0) {
#line 512 "Share.c"
		GtkDialog* dialog = NULL;
		GtkWindow* _tmp17_ = NULL;
		GtkDialog* _tmp18_ = NULL;
		GtkBox* content_area = NULL;
		GtkDialog* _tmp19_ = NULL;
		GtkBox* _tmp20_ = NULL;
		GtkBox* _tmp21_ = NULL;
		GtkLabel* label = NULL;
		GtkLabel* _tmp22_ = NULL;
		GtkBox* _tmp23_ = NULL;
		GtkLabel* _tmp24_ = NULL;
		GtkDialog* _tmp25_ = NULL;
		GtkDialog* _tmp26_ = NULL;
#line 46 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp17_ = _data3_->window;
#line 46 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp18_ = (GtkDialog*) gtk_dialog_new_with_buttons ("Wait!", _tmp17_, GTK_DIALOG_MODAL, "OK", GTK_RESPONSE_OK, NULL, NULL);
#line 46 "/home/logan/Source/Vala/journal/src/Share.vala"
		g_object_ref_sink (_tmp18_);
#line 46 "/home/logan/Source/Vala/journal/src/Share.vala"
		dialog = _tmp18_;
#line 50 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp19_ = dialog;
#line 50 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp20_ = (GtkBox*) gtk_dialog_get_content_area (_tmp19_);
#line 50 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp21_ = _g_object_ref0 (_tmp20_);
#line 50 "/home/logan/Source/Vala/journal/src/Share.vala"
		content_area = _tmp21_;
#line 51 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp22_ = (GtkLabel*) gtk_label_new ("Nothing to upload to Hastebin!");
#line 51 "/home/logan/Source/Vala/journal/src/Share.vala"
		g_object_ref_sink (_tmp22_);
#line 51 "/home/logan/Source/Vala/journal/src/Share.vala"
		label = _tmp22_;
#line 52 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp23_ = content_area;
#line 52 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp24_ = label;
#line 52 "/home/logan/Source/Vala/journal/src/Share.vala"
		gtk_container_add ((GtkContainer*) _tmp23_, (GtkWidget*) _tmp24_);
#line 53 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp25_ = dialog;
#line 53 "/home/logan/Source/Vala/journal/src/Share.vala"
		g_signal_connect (_tmp25_, "response", (GCallback) _solus_journal_share_on_response_gtk_dialog_response, self);
#line 54 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp26_ = dialog;
#line 54 "/home/logan/Source/Vala/journal/src/Share.vala"
		gtk_widget_show_all ((GtkWidget*) _tmp26_);
#line 45 "/home/logan/Source/Vala/journal/src/Share.vala"
		_g_object_unref0 (label);
#line 45 "/home/logan/Source/Vala/journal/src/Share.vala"
		_g_object_unref0 (content_area);
#line 45 "/home/logan/Source/Vala/journal/src/Share.vala"
		_g_object_unref0 (dialog);
#line 568 "Share.c"
	} else {
		SoupSession* _tmp27_ = NULL;
		SoupMessage* _tmp28_ = NULL;
		SoupMessage* _tmp29_ = NULL;
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp27_ = session;
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp28_ = message;
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp29_ = _g_object_ref0 (_tmp28_);
#line 57 "/home/logan/Source/Vala/journal/src/Share.vala"
		soup_session_queue_message (_tmp27_, _tmp29_, ____lambda26__soup_session_callback, block3_data_ref (_data3_));
#line 581 "Share.c"
	}
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_object_unref0 (message);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_object_unref0 (session);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_free0 (url);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	_g_object_unref0 (display);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	block3_data_unref (_data3_);
#line 30 "/home/logan/Source/Vala/journal/src/Share.vala"
	_data3_ = NULL;
#line 595 "Share.c"
}


static void solus_journal_share_on_response (SolusJournalShare* self, GtkDialog* dialog, gint response_id) {
	gint _tmp0_ = 0;
#line 90 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_return_if_fail (self != NULL);
#line 90 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_return_if_fail (dialog != NULL);
#line 91 "/home/logan/Source/Vala/journal/src/Share.vala"
	_tmp0_ = response_id;
#line 91 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (_tmp0_ == 1) {
#line 609 "Share.c"
		GtkClipboard* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
		GtkDialog* _tmp3_ = NULL;
#line 92 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp1_ = solus_journal_clipboard;
#line 92 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp2_ = solus_journal_link;
#line 92 "/home/logan/Source/Vala/journal/src/Share.vala"
		gtk_clipboard_set_text (_tmp1_, _tmp2_, -1);
#line 93 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp3_ = dialog;
#line 93 "/home/logan/Source/Vala/journal/src/Share.vala"
		gtk_widget_destroy ((GtkWidget*) _tmp3_);
#line 623 "Share.c"
	} else {
		GtkDialog* _tmp4_ = NULL;
#line 96 "/home/logan/Source/Vala/journal/src/Share.vala"
		_tmp4_ = dialog;
#line 96 "/home/logan/Source/Vala/journal/src/Share.vala"
		gtk_widget_destroy ((GtkWidget*) _tmp4_);
#line 630 "Share.c"
	}
}


SolusJournalShare* solus_journal_share_construct (GType object_type) {
	SolusJournalShare* self = NULL;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	self = (SolusJournalShare*) g_type_create_instance (object_type);
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	return self;
#line 641 "Share.c"
}


SolusJournalShare* solus_journal_share_new (void) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	return solus_journal_share_construct (SOLUS_JOURNAL_TYPE_SHARE);
#line 648 "Share.c"
}


static void solus_journal_value_share_init (GValue* value) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	value->data[0].v_pointer = NULL;
#line 655 "Share.c"
}


static void solus_journal_value_share_free_value (GValue* value) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (value->data[0].v_pointer) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		solus_journal_share_unref (value->data[0].v_pointer);
#line 664 "Share.c"
	}
}


static void solus_journal_value_share_copy_value (const GValue* src_value, GValue* dest_value) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (src_value->data[0].v_pointer) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		dest_value->data[0].v_pointer = solus_journal_share_ref (src_value->data[0].v_pointer);
#line 674 "Share.c"
	} else {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		dest_value->data[0].v_pointer = NULL;
#line 678 "Share.c"
	}
}


static gpointer solus_journal_value_share_peek_pointer (const GValue* value) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	return value->data[0].v_pointer;
#line 686 "Share.c"
}


static gchar* solus_journal_value_share_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (collect_values[0].v_pointer) {
#line 693 "Share.c"
		SolusJournalShare* object;
		object = collect_values[0].v_pointer;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		if (object->parent_instance.g_class == NULL) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 700 "Share.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 704 "Share.c"
		}
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		value->data[0].v_pointer = solus_journal_share_ref (object);
#line 708 "Share.c"
	} else {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		value->data[0].v_pointer = NULL;
#line 712 "Share.c"
	}
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	return NULL;
#line 716 "Share.c"
}


static gchar* solus_journal_value_share_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	SolusJournalShare** object_p;
	object_p = collect_values[0].v_pointer;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (!object_p) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 727 "Share.c"
	}
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (!value->data[0].v_pointer) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		*object_p = NULL;
#line 733 "Share.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		*object_p = value->data[0].v_pointer;
#line 737 "Share.c"
	} else {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		*object_p = solus_journal_share_ref (value->data[0].v_pointer);
#line 741 "Share.c"
	}
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	return NULL;
#line 745 "Share.c"
}


GParamSpec* solus_journal_param_spec_share (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	SolusJournalParamSpecShare* spec;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_return_val_if_fail (g_type_is_a (object_type, SOLUS_JOURNAL_TYPE_SHARE), NULL);
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	return G_PARAM_SPEC (spec);
#line 759 "Share.c"
}


gpointer solus_journal_value_get_share (const GValue* value) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, SOLUS_JOURNAL_TYPE_SHARE), NULL);
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	return value->data[0].v_pointer;
#line 768 "Share.c"
}


void solus_journal_value_set_share (GValue* value, gpointer v_object) {
	SolusJournalShare* old;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, SOLUS_JOURNAL_TYPE_SHARE));
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	old = value->data[0].v_pointer;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (v_object) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, SOLUS_JOURNAL_TYPE_SHARE));
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		value->data[0].v_pointer = v_object;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		solus_journal_share_ref (value->data[0].v_pointer);
#line 788 "Share.c"
	} else {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		value->data[0].v_pointer = NULL;
#line 792 "Share.c"
	}
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (old) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		solus_journal_share_unref (old);
#line 798 "Share.c"
	}
}


void solus_journal_value_take_share (GValue* value, gpointer v_object) {
	SolusJournalShare* old;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, SOLUS_JOURNAL_TYPE_SHARE));
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	old = value->data[0].v_pointer;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (v_object) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, SOLUS_JOURNAL_TYPE_SHARE));
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		value->data[0].v_pointer = v_object;
#line 817 "Share.c"
	} else {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		value->data[0].v_pointer = NULL;
#line 821 "Share.c"
	}
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (old) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		solus_journal_share_unref (old);
#line 827 "Share.c"
	}
}


static void solus_journal_share_class_init (SolusJournalShareClass * klass) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	solus_journal_share_parent_class = g_type_class_peek_parent (klass);
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	((SolusJournalShareClass *) klass)->finalize = solus_journal_share_finalize;
#line 837 "Share.c"
}


static void solus_journal_share_instance_init (SolusJournalShare * self) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	self->ref_count = 1;
#line 844 "Share.c"
}


static void solus_journal_share_finalize (SolusJournalShare* obj) {
	SolusJournalShare * self;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SOLUS_JOURNAL_TYPE_SHARE, SolusJournalShare);
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_signal_handlers_destroy (self);
#line 854 "Share.c"
}


GType solus_journal_share_get_type (void) {
	static volatile gsize solus_journal_share_type_id__volatile = 0;
	if (g_once_init_enter (&solus_journal_share_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { solus_journal_value_share_init, solus_journal_value_share_free_value, solus_journal_value_share_copy_value, solus_journal_value_share_peek_pointer, "p", solus_journal_value_share_collect_value, "p", solus_journal_value_share_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (SolusJournalShareClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) solus_journal_share_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SolusJournalShare), 0, (GInstanceInitFunc) solus_journal_share_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType solus_journal_share_type_id;
		solus_journal_share_type_id = g_type_register_fundamental (g_type_fundamental_next (), "SolusJournalShare", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&solus_journal_share_type_id__volatile, solus_journal_share_type_id);
	}
	return solus_journal_share_type_id__volatile;
}


gpointer solus_journal_share_ref (gpointer instance) {
	SolusJournalShare* self;
	self = instance;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	g_atomic_int_inc (&self->ref_count);
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	return instance;
#line 879 "Share.c"
}


void solus_journal_share_unref (gpointer instance) {
	SolusJournalShare* self;
	self = instance;
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		SOLUS_JOURNAL_SHARE_GET_CLASS (self)->finalize (self);
#line 28 "/home/logan/Source/Vala/journal/src/Share.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 892 "Share.c"
	}
}



