/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Provides the reason a registration was rejected.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RegistrationDeniedReasonInformation">AWS
   * API Reference</a></p>
   */
  class RegistrationDeniedReasonInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RegistrationDeniedReasonInformation();
    AWS_PINPOINTSMSVOICEV2_API RegistrationDeniedReasonInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationDeniedReasonInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reason a registration was rejected.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason a registration was rejected.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason a registration was rejected.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason a registration was rejected.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason a registration was rejected.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason a registration was rejected.</p>
     */
    inline RegistrationDeniedReasonInformation& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason a registration was rejected.</p>
     */
    inline RegistrationDeniedReasonInformation& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason a registration was rejected.</p>
     */
    inline RegistrationDeniedReasonInformation& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>A short description of the rejection reason.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }

    /**
     * <p>A short description of the rejection reason.</p>
     */
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }

    /**
     * <p>A short description of the rejection reason.</p>
     */
    inline void SetShortDescription(const Aws::String& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = value; }

    /**
     * <p>A short description of the rejection reason.</p>
     */
    inline void SetShortDescription(Aws::String&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::move(value); }

    /**
     * <p>A short description of the rejection reason.</p>
     */
    inline void SetShortDescription(const char* value) { m_shortDescriptionHasBeenSet = true; m_shortDescription.assign(value); }

    /**
     * <p>A short description of the rejection reason.</p>
     */
    inline RegistrationDeniedReasonInformation& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}

    /**
     * <p>A short description of the rejection reason.</p>
     */
    inline RegistrationDeniedReasonInformation& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}

    /**
     * <p>A short description of the rejection reason.</p>
     */
    inline RegistrationDeniedReasonInformation& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}


    /**
     * <p>A long description of the rejection reason.</p>
     */
    inline const Aws::String& GetLongDescription() const{ return m_longDescription; }

    /**
     * <p>A long description of the rejection reason.</p>
     */
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }

    /**
     * <p>A long description of the rejection reason.</p>
     */
    inline void SetLongDescription(const Aws::String& value) { m_longDescriptionHasBeenSet = true; m_longDescription = value; }

    /**
     * <p>A long description of the rejection reason.</p>
     */
    inline void SetLongDescription(Aws::String&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::move(value); }

    /**
     * <p>A long description of the rejection reason.</p>
     */
    inline void SetLongDescription(const char* value) { m_longDescriptionHasBeenSet = true; m_longDescription.assign(value); }

    /**
     * <p>A long description of the rejection reason.</p>
     */
    inline RegistrationDeniedReasonInformation& WithLongDescription(const Aws::String& value) { SetLongDescription(value); return *this;}

    /**
     * <p>A long description of the rejection reason.</p>
     */
    inline RegistrationDeniedReasonInformation& WithLongDescription(Aws::String&& value) { SetLongDescription(std::move(value)); return *this;}

    /**
     * <p>A long description of the rejection reason.</p>
     */
    inline RegistrationDeniedReasonInformation& WithLongDescription(const char* value) { SetLongDescription(value); return *this;}


    /**
     * <p>The title of the document.</p>
     */
    inline const Aws::String& GetDocumentationTitle() const{ return m_documentationTitle; }

    /**
     * <p>The title of the document.</p>
     */
    inline bool DocumentationTitleHasBeenSet() const { return m_documentationTitleHasBeenSet; }

    /**
     * <p>The title of the document.</p>
     */
    inline void SetDocumentationTitle(const Aws::String& value) { m_documentationTitleHasBeenSet = true; m_documentationTitle = value; }

    /**
     * <p>The title of the document.</p>
     */
    inline void SetDocumentationTitle(Aws::String&& value) { m_documentationTitleHasBeenSet = true; m_documentationTitle = std::move(value); }

    /**
     * <p>The title of the document.</p>
     */
    inline void SetDocumentationTitle(const char* value) { m_documentationTitleHasBeenSet = true; m_documentationTitle.assign(value); }

    /**
     * <p>The title of the document.</p>
     */
    inline RegistrationDeniedReasonInformation& WithDocumentationTitle(const Aws::String& value) { SetDocumentationTitle(value); return *this;}

    /**
     * <p>The title of the document.</p>
     */
    inline RegistrationDeniedReasonInformation& WithDocumentationTitle(Aws::String&& value) { SetDocumentationTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the document.</p>
     */
    inline RegistrationDeniedReasonInformation& WithDocumentationTitle(const char* value) { SetDocumentationTitle(value); return *this;}


    /**
     * <p>The link to the document.</p>
     */
    inline const Aws::String& GetDocumentationLink() const{ return m_documentationLink; }

    /**
     * <p>The link to the document.</p>
     */
    inline bool DocumentationLinkHasBeenSet() const { return m_documentationLinkHasBeenSet; }

    /**
     * <p>The link to the document.</p>
     */
    inline void SetDocumentationLink(const Aws::String& value) { m_documentationLinkHasBeenSet = true; m_documentationLink = value; }

    /**
     * <p>The link to the document.</p>
     */
    inline void SetDocumentationLink(Aws::String&& value) { m_documentationLinkHasBeenSet = true; m_documentationLink = std::move(value); }

    /**
     * <p>The link to the document.</p>
     */
    inline void SetDocumentationLink(const char* value) { m_documentationLinkHasBeenSet = true; m_documentationLink.assign(value); }

    /**
     * <p>The link to the document.</p>
     */
    inline RegistrationDeniedReasonInformation& WithDocumentationLink(const Aws::String& value) { SetDocumentationLink(value); return *this;}

    /**
     * <p>The link to the document.</p>
     */
    inline RegistrationDeniedReasonInformation& WithDocumentationLink(Aws::String&& value) { SetDocumentationLink(std::move(value)); return *this;}

    /**
     * <p>The link to the document.</p>
     */
    inline RegistrationDeniedReasonInformation& WithDocumentationLink(const char* value) { SetDocumentationLink(value); return *this;}

  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_shortDescription;
    bool m_shortDescriptionHasBeenSet = false;

    Aws::String m_longDescription;
    bool m_longDescriptionHasBeenSet = false;

    Aws::String m_documentationTitle;
    bool m_documentationTitleHasBeenSet = false;

    Aws::String m_documentationLink;
    bool m_documentationLinkHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
