/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AssociationStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An array of requested updates to the enablement status of controls in
   * specified standards. The objects in the array include a security control ID, the
   * Amazon Resource Name (ARN) of the standard, the requested enablement status, and
   * the reason for updating the enablement status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsControlAssociationUpdate">AWS
   * API Reference</a></p>
   */
  class StandardsControlAssociationUpdate
  {
  public:
    AWS_SECURITYHUB_API StandardsControlAssociationUpdate() = default;
    AWS_SECURITYHUB_API StandardsControlAssociationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsControlAssociationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the standard in which you want to update
     * the control's enablement status.</p>
     */
    inline const Aws::String& GetStandardsArn() const { return m_standardsArn; }
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }
    template<typename StandardsArnT = Aws::String>
    void SetStandardsArn(StandardsArnT&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::forward<StandardsArnT>(value); }
    template<typename StandardsArnT = Aws::String>
    StandardsControlAssociationUpdate& WithStandardsArn(StandardsArnT&& value) { SetStandardsArn(std::forward<StandardsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the security control whose enablement status you
     * want to update.</p>
     */
    inline const Aws::String& GetSecurityControlId() const { return m_securityControlId; }
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }
    template<typename SecurityControlIdT = Aws::String>
    void SetSecurityControlId(SecurityControlIdT&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::forward<SecurityControlIdT>(value); }
    template<typename SecurityControlIdT = Aws::String>
    StandardsControlAssociationUpdate& WithSecurityControlId(SecurityControlIdT&& value) { SetSecurityControlId(std::forward<SecurityControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired enablement status of the control in the standard.</p>
     */
    inline AssociationStatus GetAssociationStatus() const { return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(AssociationStatus value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline StandardsControlAssociationUpdate& WithAssociationStatus(AssociationStatus value) { SetAssociationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for updating the control's enablement status in the standard.</p>
     */
    inline const Aws::String& GetUpdatedReason() const { return m_updatedReason; }
    inline bool UpdatedReasonHasBeenSet() const { return m_updatedReasonHasBeenSet; }
    template<typename UpdatedReasonT = Aws::String>
    void SetUpdatedReason(UpdatedReasonT&& value) { m_updatedReasonHasBeenSet = true; m_updatedReason = std::forward<UpdatedReasonT>(value); }
    template<typename UpdatedReasonT = Aws::String>
    StandardsControlAssociationUpdate& WithUpdatedReason(UpdatedReasonT&& value) { SetUpdatedReason(std::forward<UpdatedReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet = false;

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    AssociationStatus m_associationStatus{AssociationStatus::NOT_SET};
    bool m_associationStatusHasBeenSet = false;

    Aws::String m_updatedReason;
    bool m_updatedReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
