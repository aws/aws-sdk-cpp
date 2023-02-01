/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/SuppressionListReason.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains information about the email address suppression
   * preferences for your account in the current Amazon Web Services
   * Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressionAttributes">AWS
   * API Reference</a></p>
   */
  class SuppressionAttributes
  {
  public:
    AWS_SESV2_API SuppressionAttributes();
    AWS_SESV2_API SuppressionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API SuppressionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list that contains the reasons that email addresses will be automatically
     * added to the suppression list for your account. This list can contain any or all
     * of the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline const Aws::Vector<SuppressionListReason>& GetSuppressedReasons() const{ return m_suppressedReasons; }

    /**
     * <p>A list that contains the reasons that email addresses will be automatically
     * added to the suppression list for your account. This list can contain any or all
     * of the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline bool SuppressedReasonsHasBeenSet() const { return m_suppressedReasonsHasBeenSet; }

    /**
     * <p>A list that contains the reasons that email addresses will be automatically
     * added to the suppression list for your account. This list can contain any or all
     * of the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline void SetSuppressedReasons(const Aws::Vector<SuppressionListReason>& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons = value; }

    /**
     * <p>A list that contains the reasons that email addresses will be automatically
     * added to the suppression list for your account. This list can contain any or all
     * of the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline void SetSuppressedReasons(Aws::Vector<SuppressionListReason>&& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons = std::move(value); }

    /**
     * <p>A list that contains the reasons that email addresses will be automatically
     * added to the suppression list for your account. This list can contain any or all
     * of the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline SuppressionAttributes& WithSuppressedReasons(const Aws::Vector<SuppressionListReason>& value) { SetSuppressedReasons(value); return *this;}

    /**
     * <p>A list that contains the reasons that email addresses will be automatically
     * added to the suppression list for your account. This list can contain any or all
     * of the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline SuppressionAttributes& WithSuppressedReasons(Aws::Vector<SuppressionListReason>&& value) { SetSuppressedReasons(std::move(value)); return *this;}

    /**
     * <p>A list that contains the reasons that email addresses will be automatically
     * added to the suppression list for your account. This list can contain any or all
     * of the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline SuppressionAttributes& AddSuppressedReasons(const SuppressionListReason& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons.push_back(value); return *this; }

    /**
     * <p>A list that contains the reasons that email addresses will be automatically
     * added to the suppression list for your account. This list can contain any or all
     * of the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline SuppressionAttributes& AddSuppressedReasons(SuppressionListReason&& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SuppressionListReason> m_suppressedReasons;
    bool m_suppressedReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
