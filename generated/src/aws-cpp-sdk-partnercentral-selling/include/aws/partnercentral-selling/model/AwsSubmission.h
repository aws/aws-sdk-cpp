/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/SalesInvolvementType.h>
#include <aws/partnercentral-selling/model/Visibility.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Indicates the level of AWS involvement in the opportunity. This field helps
   * track AWS participation throughout the engagement, such as providing technical
   * support, deal assistance, and sales support.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsSubmission">AWS
   * API Reference</a></p>
   */
  class AwsSubmission
  {
  public:
    AWS_PARTNERCENTRALSELLING_API AwsSubmission() = default;
    AWS_PARTNERCENTRALSELLING_API AwsSubmission(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AwsSubmission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the type of AWS involvement in the opportunity, such as coselling,
     * deal support, or technical consultation. This helps categorize the nature of AWS
     * participation.</p>
     */
    inline SalesInvolvementType GetInvolvementType() const { return m_involvementType; }
    inline bool InvolvementTypeHasBeenSet() const { return m_involvementTypeHasBeenSet; }
    inline void SetInvolvementType(SalesInvolvementType value) { m_involvementTypeHasBeenSet = true; m_involvementType = value; }
    inline AwsSubmission& WithInvolvementType(SalesInvolvementType value) { SetInvolvementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines who can view AWS involvement in the opportunity. Typically, this
     * field is set to <code>Full</code> for most cases, but it may be restricted based
     * on special program requirements or confidentiality needs.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline AwsSubmission& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}
  private:

    SalesInvolvementType m_involvementType{SalesInvolvementType::NOT_SET};
    bool m_involvementTypeHasBeenSet = false;

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
