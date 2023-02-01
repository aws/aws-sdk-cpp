/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class CreateTemplateResult
  {
  public:
    AWS_QUICKSIGHT_API CreateTemplateResult();
    AWS_QUICKSIGHT_API CreateTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN for the template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN for the template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN for the template.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN for the template.</p>
     */
    inline CreateTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the template.</p>
     */
    inline CreateTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the template.</p>
     */
    inline CreateTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ARN for the template, including the version information of the first
     * version.</p>
     */
    inline const Aws::String& GetVersionArn() const{ return m_versionArn; }

    /**
     * <p>The ARN for the template, including the version information of the first
     * version.</p>
     */
    inline void SetVersionArn(const Aws::String& value) { m_versionArn = value; }

    /**
     * <p>The ARN for the template, including the version information of the first
     * version.</p>
     */
    inline void SetVersionArn(Aws::String&& value) { m_versionArn = std::move(value); }

    /**
     * <p>The ARN for the template, including the version information of the first
     * version.</p>
     */
    inline void SetVersionArn(const char* value) { m_versionArn.assign(value); }

    /**
     * <p>The ARN for the template, including the version information of the first
     * version.</p>
     */
    inline CreateTemplateResult& WithVersionArn(const Aws::String& value) { SetVersionArn(value); return *this;}

    /**
     * <p>The ARN for the template, including the version information of the first
     * version.</p>
     */
    inline CreateTemplateResult& WithVersionArn(Aws::String&& value) { SetVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the template, including the version information of the first
     * version.</p>
     */
    inline CreateTemplateResult& WithVersionArn(const char* value) { SetVersionArn(value); return *this;}


    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }

    /**
     * <p>The ID of the template.</p>
     */
    inline CreateTemplateResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline CreateTemplateResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline CreateTemplateResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The template creation status.</p>
     */
    inline const ResourceStatus& GetCreationStatus() const{ return m_creationStatus; }

    /**
     * <p>The template creation status.</p>
     */
    inline void SetCreationStatus(const ResourceStatus& value) { m_creationStatus = value; }

    /**
     * <p>The template creation status.</p>
     */
    inline void SetCreationStatus(ResourceStatus&& value) { m_creationStatus = std::move(value); }

    /**
     * <p>The template creation status.</p>
     */
    inline CreateTemplateResult& WithCreationStatus(const ResourceStatus& value) { SetCreationStatus(value); return *this;}

    /**
     * <p>The template creation status.</p>
     */
    inline CreateTemplateResult& WithCreationStatus(ResourceStatus&& value) { SetCreationStatus(std::move(value)); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline CreateTemplateResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_versionArn;

    Aws::String m_templateId;

    ResourceStatus m_creationStatus;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
