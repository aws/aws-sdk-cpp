/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/SendingStatus.h>
#include <aws/sesv2/model/Tag.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Information about a newly created tenant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateTenantResponse">AWS
   * API Reference</a></p>
   */
  class CreateTenantResult
  {
  public:
    AWS_SESV2_API CreateTenantResult() = default;
    AWS_SESV2_API CreateTenantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API CreateTenantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the tenant.</p>
     */
    inline const Aws::String& GetTenantName() const { return m_tenantName; }
    template<typename TenantNameT = Aws::String>
    void SetTenantName(TenantNameT&& value) { m_tenantNameHasBeenSet = true; m_tenantName = std::forward<TenantNameT>(value); }
    template<typename TenantNameT = Aws::String>
    CreateTenantResult& WithTenantName(TenantNameT&& value) { SetTenantName(std::forward<TenantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the tenant.</p>
     */
    inline const Aws::String& GetTenantId() const { return m_tenantId; }
    template<typename TenantIdT = Aws::String>
    void SetTenantId(TenantIdT&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::forward<TenantIdT>(value); }
    template<typename TenantIdT = Aws::String>
    CreateTenantResult& WithTenantId(TenantIdT&& value) { SetTenantId(std::forward<TenantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the tenant.</p>
     */
    inline const Aws::String& GetTenantArn() const { return m_tenantArn; }
    template<typename TenantArnT = Aws::String>
    void SetTenantArn(TenantArnT&& value) { m_tenantArnHasBeenSet = true; m_tenantArn = std::forward<TenantArnT>(value); }
    template<typename TenantArnT = Aws::String>
    CreateTenantResult& WithTenantArn(TenantArnT&& value) { SetTenantArn(std::forward<TenantArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the tenant was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    CreateTenantResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) associated with
     * the tenant.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTenantResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTenantResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of email sending capability for the tenant.</p>
     */
    inline SendingStatus GetSendingStatus() const { return m_sendingStatus; }
    inline void SetSendingStatus(SendingStatus value) { m_sendingStatusHasBeenSet = true; m_sendingStatus = value; }
    inline CreateTenantResult& WithSendingStatus(SendingStatus value) { SetSendingStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTenantResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tenantName;
    bool m_tenantNameHasBeenSet = false;

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    Aws::String m_tenantArn;
    bool m_tenantArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SendingStatus m_sendingStatus{SendingStatus::NOT_SET};
    bool m_sendingStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
