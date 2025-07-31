/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/model/ReputationEntityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to update the reputation management policy for a
   * reputation entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateReputationEntityPolicyRequest">AWS
   * API Reference</a></p>
   */
  class UpdateReputationEntityPolicyRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API UpdateReputationEntityPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReputationEntityPolicy"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of reputation entity. Currently, only <code>RESOURCE</code> type
     * entities are supported.</p>
     */
    inline ReputationEntityType GetReputationEntityType() const { return m_reputationEntityType; }
    inline bool ReputationEntityTypeHasBeenSet() const { return m_reputationEntityTypeHasBeenSet; }
    inline void SetReputationEntityType(ReputationEntityType value) { m_reputationEntityTypeHasBeenSet = true; m_reputationEntityType = value; }
    inline UpdateReputationEntityPolicyRequest& WithReputationEntityType(ReputationEntityType value) { SetReputationEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the reputation entity. For resource-type entities,
     * this is the Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetReputationEntityReference() const { return m_reputationEntityReference; }
    inline bool ReputationEntityReferenceHasBeenSet() const { return m_reputationEntityReferenceHasBeenSet; }
    template<typename ReputationEntityReferenceT = Aws::String>
    void SetReputationEntityReference(ReputationEntityReferenceT&& value) { m_reputationEntityReferenceHasBeenSet = true; m_reputationEntityReference = std::forward<ReputationEntityReferenceT>(value); }
    template<typename ReputationEntityReferenceT = Aws::String>
    UpdateReputationEntityPolicyRequest& WithReputationEntityReference(ReputationEntityReferenceT&& value) { SetReputationEntityReference(std::forward<ReputationEntityReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the reputation management policy to apply
     * to this entity. This is an Amazon Web Services Amazon SES-managed policy.</p>
     */
    inline const Aws::String& GetReputationEntityPolicy() const { return m_reputationEntityPolicy; }
    inline bool ReputationEntityPolicyHasBeenSet() const { return m_reputationEntityPolicyHasBeenSet; }
    template<typename ReputationEntityPolicyT = Aws::String>
    void SetReputationEntityPolicy(ReputationEntityPolicyT&& value) { m_reputationEntityPolicyHasBeenSet = true; m_reputationEntityPolicy = std::forward<ReputationEntityPolicyT>(value); }
    template<typename ReputationEntityPolicyT = Aws::String>
    UpdateReputationEntityPolicyRequest& WithReputationEntityPolicy(ReputationEntityPolicyT&& value) { SetReputationEntityPolicy(std::forward<ReputationEntityPolicyT>(value)); return *this;}
    ///@}
  private:

    ReputationEntityType m_reputationEntityType{ReputationEntityType::NOT_SET};
    bool m_reputationEntityTypeHasBeenSet = false;

    Aws::String m_reputationEntityReference;
    bool m_reputationEntityReferenceHasBeenSet = false;

    Aws::String m_reputationEntityPolicy;
    bool m_reputationEntityPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
