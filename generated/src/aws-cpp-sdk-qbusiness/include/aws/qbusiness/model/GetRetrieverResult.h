/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/RetrieverConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/RetrieverStatus.h>
#include <aws/qbusiness/model/RetrieverType.h>
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
namespace QBusiness
{
namespace Model
{
  class GetRetrieverResult
  {
  public:
    AWS_QBUSINESS_API GetRetrieverResult();
    AWS_QBUSINESS_API GetRetrieverResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetRetrieverResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the Amazon Q application using the retriever. </p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q application using the retriever. </p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q application using the retriever. </p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q application using the retriever. </p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q application using the retriever. </p>
     */
    inline GetRetrieverResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q application using the retriever. </p>
     */
    inline GetRetrieverResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q application using the retriever. </p>
     */
    inline GetRetrieverResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    
    inline const RetrieverConfiguration& GetConfiguration() const{ return m_configuration; }

    
    inline void SetConfiguration(const RetrieverConfiguration& value) { m_configuration = value; }

    
    inline void SetConfiguration(RetrieverConfiguration&& value) { m_configuration = std::move(value); }

    
    inline GetRetrieverResult& WithConfiguration(const RetrieverConfiguration& value) { SetConfiguration(value); return *this;}

    
    inline GetRetrieverResult& WithConfiguration(RetrieverConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp when the retriever was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp when the retriever was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The Unix timestamp when the retriever was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the retriever was created.</p>
     */
    inline GetRetrieverResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the retriever was created.</p>
     */
    inline GetRetrieverResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the retriever.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the retriever.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The name of the retriever.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The name of the retriever.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The name of the retriever.</p>
     */
    inline GetRetrieverResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the retriever.</p>
     */
    inline GetRetrieverResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the retriever.</p>
     */
    inline GetRetrieverResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the
     * retriever.</p>
     */
    inline const Aws::String& GetRetrieverArn() const{ return m_retrieverArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the
     * retriever.</p>
     */
    inline void SetRetrieverArn(const Aws::String& value) { m_retrieverArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the
     * retriever.</p>
     */
    inline void SetRetrieverArn(Aws::String&& value) { m_retrieverArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the
     * retriever.</p>
     */
    inline void SetRetrieverArn(const char* value) { m_retrieverArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the
     * retriever.</p>
     */
    inline GetRetrieverResult& WithRetrieverArn(const Aws::String& value) { SetRetrieverArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the
     * retriever.</p>
     */
    inline GetRetrieverResult& WithRetrieverArn(Aws::String&& value) { SetRetrieverArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the
     * retriever.</p>
     */
    inline GetRetrieverResult& WithRetrieverArn(const char* value) { SetRetrieverArn(value); return *this;}


    /**
     * <p>The identifier of the retriever.</p>
     */
    inline const Aws::String& GetRetrieverId() const{ return m_retrieverId; }

    /**
     * <p>The identifier of the retriever.</p>
     */
    inline void SetRetrieverId(const Aws::String& value) { m_retrieverId = value; }

    /**
     * <p>The identifier of the retriever.</p>
     */
    inline void SetRetrieverId(Aws::String&& value) { m_retrieverId = std::move(value); }

    /**
     * <p>The identifier of the retriever.</p>
     */
    inline void SetRetrieverId(const char* value) { m_retrieverId.assign(value); }

    /**
     * <p>The identifier of the retriever.</p>
     */
    inline GetRetrieverResult& WithRetrieverId(const Aws::String& value) { SetRetrieverId(value); return *this;}

    /**
     * <p>The identifier of the retriever.</p>
     */
    inline GetRetrieverResult& WithRetrieverId(Aws::String&& value) { SetRetrieverId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the retriever.</p>
     */
    inline GetRetrieverResult& WithRetrieverId(const char* value) { SetRetrieverId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * retriever and required resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * retriever and required resources.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * retriever and required resources.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * retriever and required resources.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * retriever and required resources.</p>
     */
    inline GetRetrieverResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * retriever and required resources.</p>
     */
    inline GetRetrieverResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * retriever and required resources.</p>
     */
    inline GetRetrieverResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the retriever.</p>
     */
    inline const RetrieverStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the retriever.</p>
     */
    inline void SetStatus(const RetrieverStatus& value) { m_status = value; }

    /**
     * <p>The status of the retriever.</p>
     */
    inline void SetStatus(RetrieverStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the retriever.</p>
     */
    inline GetRetrieverResult& WithStatus(const RetrieverStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the retriever.</p>
     */
    inline GetRetrieverResult& WithStatus(RetrieverStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the retriever.</p>
     */
    inline const RetrieverType& GetType() const{ return m_type; }

    /**
     * <p>The type of the retriever.</p>
     */
    inline void SetType(const RetrieverType& value) { m_type = value; }

    /**
     * <p>The type of the retriever.</p>
     */
    inline void SetType(RetrieverType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the retriever.</p>
     */
    inline GetRetrieverResult& WithType(const RetrieverType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the retriever.</p>
     */
    inline GetRetrieverResult& WithType(RetrieverType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp when the retriever was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix timestamp when the retriever was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The Unix timestamp when the retriever was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the retriever was last updated.</p>
     */
    inline GetRetrieverResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the retriever was last updated.</p>
     */
    inline GetRetrieverResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRetrieverResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRetrieverResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRetrieverResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_applicationId;

    RetrieverConfiguration m_configuration;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_displayName;

    Aws::String m_retrieverArn;

    Aws::String m_retrieverId;

    Aws::String m_roleArn;

    RetrieverStatus m_status;

    RetrieverType m_type;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
