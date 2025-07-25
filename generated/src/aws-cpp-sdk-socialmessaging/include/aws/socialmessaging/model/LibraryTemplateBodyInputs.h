/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

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
namespace SocialMessaging
{
namespace Model
{

  /**
   * <p>Configuration options for customizing the body content of a template from
   * Meta's library.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/LibraryTemplateBodyInputs">AWS
   * API Reference</a></p>
   */
  class LibraryTemplateBodyInputs
  {
  public:
    AWS_SOCIALMESSAGING_API LibraryTemplateBodyInputs() = default;
    AWS_SOCIALMESSAGING_API LibraryTemplateBodyInputs(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API LibraryTemplateBodyInputs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When true, includes a contact number in the template body.</p>
     */
    inline bool GetAddContactNumber() const { return m_addContactNumber; }
    inline bool AddContactNumberHasBeenSet() const { return m_addContactNumberHasBeenSet; }
    inline void SetAddContactNumber(bool value) { m_addContactNumberHasBeenSet = true; m_addContactNumber = value; }
    inline LibraryTemplateBodyInputs& WithAddContactNumber(bool value) { SetAddContactNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, includes a "learn more" link in the template body.</p>
     */
    inline bool GetAddLearnMoreLink() const { return m_addLearnMoreLink; }
    inline bool AddLearnMoreLinkHasBeenSet() const { return m_addLearnMoreLinkHasBeenSet; }
    inline void SetAddLearnMoreLink(bool value) { m_addLearnMoreLinkHasBeenSet = true; m_addLearnMoreLink = value; }
    inline LibraryTemplateBodyInputs& WithAddLearnMoreLink(bool value) { SetAddLearnMoreLink(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, includes security recommendations in the template body.</p>
     */
    inline bool GetAddSecurityRecommendation() const { return m_addSecurityRecommendation; }
    inline bool AddSecurityRecommendationHasBeenSet() const { return m_addSecurityRecommendationHasBeenSet; }
    inline void SetAddSecurityRecommendation(bool value) { m_addSecurityRecommendationHasBeenSet = true; m_addSecurityRecommendation = value; }
    inline LibraryTemplateBodyInputs& WithAddSecurityRecommendation(bool value) { SetAddSecurityRecommendation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, includes a package tracking link in the template body.</p>
     */
    inline bool GetAddTrackPackageLink() const { return m_addTrackPackageLink; }
    inline bool AddTrackPackageLinkHasBeenSet() const { return m_addTrackPackageLinkHasBeenSet; }
    inline void SetAddTrackPackageLink(bool value) { m_addTrackPackageLinkHasBeenSet = true; m_addTrackPackageLink = value; }
    inline LibraryTemplateBodyInputs& WithAddTrackPackageLink(bool value) { SetAddTrackPackageLink(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes until a verification code or OTP expires.</p>
     */
    inline int GetCodeExpirationMinutes() const { return m_codeExpirationMinutes; }
    inline bool CodeExpirationMinutesHasBeenSet() const { return m_codeExpirationMinutesHasBeenSet; }
    inline void SetCodeExpirationMinutes(int value) { m_codeExpirationMinutesHasBeenSet = true; m_codeExpirationMinutes = value; }
    inline LibraryTemplateBodyInputs& WithCodeExpirationMinutes(int value) { SetCodeExpirationMinutes(value); return *this;}
    ///@}
  private:

    bool m_addContactNumber{false};
    bool m_addContactNumberHasBeenSet = false;

    bool m_addLearnMoreLink{false};
    bool m_addLearnMoreLinkHasBeenSet = false;

    bool m_addSecurityRecommendation{false};
    bool m_addSecurityRecommendationHasBeenSet = false;

    bool m_addTrackPackageLink{false};
    bool m_addTrackPackageLinkHasBeenSet = false;

    int m_codeExpirationMinutes{0};
    bool m_codeExpirationMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
