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


    ///@{
    /**
     * <p>The ARN for the template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the template, including the version information of the first
     * version.</p>
     */
    inline const Aws::String& GetVersionArn() const{ return m_versionArn; }
    inline void SetVersionArn(const Aws::String& value) { m_versionArn = value; }
    inline void SetVersionArn(Aws::String&& value) { m_versionArn = std::move(value); }
    inline void SetVersionArn(const char* value) { m_versionArn.assign(value); }
    inline CreateTemplateResult& WithVersionArn(const Aws::String& value) { SetVersionArn(value); return *this;}
    inline CreateTemplateResult& WithVersionArn(Aws::String&& value) { SetVersionArn(std::move(value)); return *this;}
    inline CreateTemplateResult& WithVersionArn(const char* value) { SetVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }
    inline CreateTemplateResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline CreateTemplateResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline CreateTemplateResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template creation status.</p>
     */
    inline const ResourceStatus& GetCreationStatus() const{ return m_creationStatus; }
    inline void SetCreationStatus(const ResourceStatus& value) { m_creationStatus = value; }
    inline void SetCreationStatus(ResourceStatus&& value) { m_creationStatus = std::move(value); }
    inline CreateTemplateResult& WithCreationStatus(const ResourceStatus& value) { SetCreationStatus(value); return *this;}
    inline CreateTemplateResult& WithCreationStatus(ResourceStatus&& value) { SetCreationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline CreateTemplateResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
