/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SuppressionListReason.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to add an email destination to the suppression list for your
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutSuppressedDestinationRequest">AWS
   * API Reference</a></p>
   */
  class PutSuppressedDestinationRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutSuppressedDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSuppressedDestination"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The email address that should be added to the suppression list for your
     * account.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address that should be added to the suppression list for your
     * account.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address that should be added to the suppression list for your
     * account.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address that should be added to the suppression list for your
     * account.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address that should be added to the suppression list for your
     * account.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address that should be added to the suppression list for your
     * account.</p>
     */
    inline PutSuppressedDestinationRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address that should be added to the suppression list for your
     * account.</p>
     */
    inline PutSuppressedDestinationRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address that should be added to the suppression list for your
     * account.</p>
     */
    inline PutSuppressedDestinationRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The factors that should cause the email address to be added to the
     * suppression list for your account.</p>
     */
    inline const SuppressionListReason& GetReason() const{ return m_reason; }

    /**
     * <p>The factors that should cause the email address to be added to the
     * suppression list for your account.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The factors that should cause the email address to be added to the
     * suppression list for your account.</p>
     */
    inline void SetReason(const SuppressionListReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The factors that should cause the email address to be added to the
     * suppression list for your account.</p>
     */
    inline void SetReason(SuppressionListReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The factors that should cause the email address to be added to the
     * suppression list for your account.</p>
     */
    inline PutSuppressedDestinationRequest& WithReason(const SuppressionListReason& value) { SetReason(value); return *this;}

    /**
     * <p>The factors that should cause the email address to be added to the
     * suppression list for your account.</p>
     */
    inline PutSuppressedDestinationRequest& WithReason(SuppressionListReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    SuppressionListReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
