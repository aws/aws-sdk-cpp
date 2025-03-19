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
   * <p>An object that contains information about the suppression list preferences
   * for your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressionOptions">AWS
   * API Reference</a></p>
   */
  class SuppressionOptions
  {
  public:
    AWS_SESV2_API SuppressionOptions() = default;
    AWS_SESV2_API SuppressionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API SuppressionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list that contains the reasons that email addresses are automatically added
     * to the suppression list for your account. This list can contain any or all of
     * the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline const Aws::Vector<SuppressionListReason>& GetSuppressedReasons() const { return m_suppressedReasons; }
    inline bool SuppressedReasonsHasBeenSet() const { return m_suppressedReasonsHasBeenSet; }
    template<typename SuppressedReasonsT = Aws::Vector<SuppressionListReason>>
    void SetSuppressedReasons(SuppressedReasonsT&& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons = std::forward<SuppressedReasonsT>(value); }
    template<typename SuppressedReasonsT = Aws::Vector<SuppressionListReason>>
    SuppressionOptions& WithSuppressedReasons(SuppressedReasonsT&& value) { SetSuppressedReasons(std::forward<SuppressedReasonsT>(value)); return *this;}
    inline SuppressionOptions& AddSuppressedReasons(SuppressionListReason value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<SuppressionListReason> m_suppressedReasons;
    bool m_suppressedReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
