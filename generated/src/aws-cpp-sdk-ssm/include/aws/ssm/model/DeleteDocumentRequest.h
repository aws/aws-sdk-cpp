/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DeleteDocumentRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DeleteDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDocument"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the document.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the document.</p>
     */
    inline DeleteDocumentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the document.</p>
     */
    inline DeleteDocumentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the document.</p>
     */
    inline DeleteDocumentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the document that you want to delete. If not provided, all
     * versions of the document are deleted.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The version of the document that you want to delete. If not provided, all
     * versions of the document are deleted.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The version of the document that you want to delete. If not provided, all
     * versions of the document are deleted.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The version of the document that you want to delete. If not provided, all
     * versions of the document are deleted.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The version of the document that you want to delete. If not provided, all
     * versions of the document are deleted.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The version of the document that you want to delete. If not provided, all
     * versions of the document are deleted.</p>
     */
    inline DeleteDocumentRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of the document that you want to delete. If not provided, all
     * versions of the document are deleted.</p>
     */
    inline DeleteDocumentRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the document that you want to delete. If not provided, all
     * versions of the document are deleted.</p>
     */
    inline DeleteDocumentRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The version name of the document that you want to delete. If not provided,
     * all versions of the document are deleted.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>The version name of the document that you want to delete. If not provided,
     * all versions of the document are deleted.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>The version name of the document that you want to delete. If not provided,
     * all versions of the document are deleted.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>The version name of the document that you want to delete. If not provided,
     * all versions of the document are deleted.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>The version name of the document that you want to delete. If not provided,
     * all versions of the document are deleted.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>The version name of the document that you want to delete. If not provided,
     * all versions of the document are deleted.</p>
     */
    inline DeleteDocumentRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>The version name of the document that you want to delete. If not provided,
     * all versions of the document are deleted.</p>
     */
    inline DeleteDocumentRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>The version name of the document that you want to delete. If not provided,
     * all versions of the document are deleted.</p>
     */
    inline DeleteDocumentRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>Some SSM document types require that you specify a <code>Force</code> flag
     * before you can delete the document. For example, you must specify a
     * <code>Force</code> flag to delete a document of type
     * <code>ApplicationConfigurationSchema</code>. You can restrict access to the
     * <code>Force</code> flag in an Identity and Access Management (IAM) policy.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>Some SSM document types require that you specify a <code>Force</code> flag
     * before you can delete the document. For example, you must specify a
     * <code>Force</code> flag to delete a document of type
     * <code>ApplicationConfigurationSchema</code>. You can restrict access to the
     * <code>Force</code> flag in an Identity and Access Management (IAM) policy.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>Some SSM document types require that you specify a <code>Force</code> flag
     * before you can delete the document. For example, you must specify a
     * <code>Force</code> flag to delete a document of type
     * <code>ApplicationConfigurationSchema</code>. You can restrict access to the
     * <code>Force</code> flag in an Identity and Access Management (IAM) policy.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>Some SSM document types require that you specify a <code>Force</code> flag
     * before you can delete the document. For example, you must specify a
     * <code>Force</code> flag to delete a document of type
     * <code>ApplicationConfigurationSchema</code>. You can restrict access to the
     * <code>Force</code> flag in an Identity and Access Management (IAM) policy.</p>
     */
    inline DeleteDocumentRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
