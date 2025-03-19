/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/RetrieverType.h>
#include <aws/qbusiness/model/RetrieverStatus.h>
#include <aws/qbusiness/model/RetrieverConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_QBUSINESS_API GetRetrieverResult() = default;
    AWS_QBUSINESS_API GetRetrieverResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetRetrieverResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application using the retriever. </p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetRetrieverResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the retriever.</p>
     */
    inline const Aws::String& GetRetrieverId() const { return m_retrieverId; }
    template<typename RetrieverIdT = Aws::String>
    void SetRetrieverId(RetrieverIdT&& value) { m_retrieverIdHasBeenSet = true; m_retrieverId = std::forward<RetrieverIdT>(value); }
    template<typename RetrieverIdT = Aws::String>
    GetRetrieverResult& WithRetrieverId(RetrieverIdT&& value) { SetRetrieverId(std::forward<RetrieverIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the
     * retriever.</p>
     */
    inline const Aws::String& GetRetrieverArn() const { return m_retrieverArn; }
    template<typename RetrieverArnT = Aws::String>
    void SetRetrieverArn(RetrieverArnT&& value) { m_retrieverArnHasBeenSet = true; m_retrieverArn = std::forward<RetrieverArnT>(value); }
    template<typename RetrieverArnT = Aws::String>
    GetRetrieverResult& WithRetrieverArn(RetrieverArnT&& value) { SetRetrieverArn(std::forward<RetrieverArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the retriever.</p>
     */
    inline RetrieverType GetType() const { return m_type; }
    inline void SetType(RetrieverType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetRetrieverResult& WithType(RetrieverType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the retriever.</p>
     */
    inline RetrieverStatus GetStatus() const { return m_status; }
    inline void SetStatus(RetrieverStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetRetrieverResult& WithStatus(RetrieverStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the retriever.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetRetrieverResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RetrieverConfiguration& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = RetrieverConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = RetrieverConfiguration>
    GetRetrieverResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * retriever and required resources.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetRetrieverResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the retriever was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetRetrieverResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the retriever was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetRetrieverResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRetrieverResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_retrieverId;
    bool m_retrieverIdHasBeenSet = false;

    Aws::String m_retrieverArn;
    bool m_retrieverArnHasBeenSet = false;

    RetrieverType m_type{RetrieverType::NOT_SET};
    bool m_typeHasBeenSet = false;

    RetrieverStatus m_status{RetrieverStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    RetrieverConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
