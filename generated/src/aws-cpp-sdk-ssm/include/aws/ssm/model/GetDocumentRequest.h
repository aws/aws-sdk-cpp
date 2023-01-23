/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentFormat.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetDocumentRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDocument"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline GetDocumentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline GetDocumentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline GetDocumentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document and can't be changed.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document and can't be changed.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document and can't be changed.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document and can't be changed.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document and can't be changed.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document and can't be changed.</p>
     */
    inline GetDocumentRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document and can't be changed.</p>
     */
    inline GetDocumentRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document and can't be changed.</p>
     */
    inline GetDocumentRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>The document version for which you want information.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The document version for which you want information.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The document version for which you want information.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The document version for which you want information.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The document version for which you want information.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The document version for which you want information.</p>
     */
    inline GetDocumentRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version for which you want information.</p>
     */
    inline GetDocumentRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The document version for which you want information.</p>
     */
    inline GetDocumentRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>Returns the document in the specified format. The document format can be
     * either JSON or YAML. JSON is the default format.</p>
     */
    inline const DocumentFormat& GetDocumentFormat() const{ return m_documentFormat; }

    /**
     * <p>Returns the document in the specified format. The document format can be
     * either JSON or YAML. JSON is the default format.</p>
     */
    inline bool DocumentFormatHasBeenSet() const { return m_documentFormatHasBeenSet; }

    /**
     * <p>Returns the document in the specified format. The document format can be
     * either JSON or YAML. JSON is the default format.</p>
     */
    inline void SetDocumentFormat(const DocumentFormat& value) { m_documentFormatHasBeenSet = true; m_documentFormat = value; }

    /**
     * <p>Returns the document in the specified format. The document format can be
     * either JSON or YAML. JSON is the default format.</p>
     */
    inline void SetDocumentFormat(DocumentFormat&& value) { m_documentFormatHasBeenSet = true; m_documentFormat = std::move(value); }

    /**
     * <p>Returns the document in the specified format. The document format can be
     * either JSON or YAML. JSON is the default format.</p>
     */
    inline GetDocumentRequest& WithDocumentFormat(const DocumentFormat& value) { SetDocumentFormat(value); return *this;}

    /**
     * <p>Returns the document in the specified format. The document format can be
     * either JSON or YAML. JSON is the default format.</p>
     */
    inline GetDocumentRequest& WithDocumentFormat(DocumentFormat&& value) { SetDocumentFormat(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    DocumentFormat m_documentFormat;
    bool m_documentFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
