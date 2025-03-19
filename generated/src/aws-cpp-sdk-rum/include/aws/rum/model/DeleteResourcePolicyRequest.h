/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudWatchRUM
{
namespace Model
{

  /**
   */
  class DeleteResourcePolicyRequest : public CloudWatchRUMRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API DeleteResourcePolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePolicy"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHRUM_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The app monitor that you want to remove the resource policy from.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeleteResourcePolicyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a specific policy revision to delete. Provide a
     * <code>PolicyRevisionId</code> to ensure an atomic delete operation. If the
     * revision ID that you provide doesn't match the latest policy revision ID, the
     * request will be rejected with an <code>InvalidPolicyRevisionIdException</code>
     * error.</p>
     */
    inline const Aws::String& GetPolicyRevisionId() const { return m_policyRevisionId; }
    inline bool PolicyRevisionIdHasBeenSet() const { return m_policyRevisionIdHasBeenSet; }
    template<typename PolicyRevisionIdT = Aws::String>
    void SetPolicyRevisionId(PolicyRevisionIdT&& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = std::forward<PolicyRevisionIdT>(value); }
    template<typename PolicyRevisionIdT = Aws::String>
    DeleteResourcePolicyRequest& WithPolicyRevisionId(PolicyRevisionIdT&& value) { SetPolicyRevisionId(std::forward<PolicyRevisionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_policyRevisionId;
    bool m_policyRevisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
