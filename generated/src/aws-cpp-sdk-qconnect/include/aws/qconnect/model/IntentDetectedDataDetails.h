/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Details about the detected intent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/IntentDetectedDataDetails">AWS
   * API Reference</a></p>
   */
  class IntentDetectedDataDetails
  {
  public:
    AWS_QCONNECT_API IntentDetectedDataDetails() = default;
    AWS_QCONNECT_API IntentDetectedDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API IntentDetectedDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The detected intent.</p>
     */
    inline const Aws::String& GetIntent() const { return m_intent; }
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
    template<typename IntentT = Aws::String>
    void SetIntent(IntentT&& value) { m_intentHasBeenSet = true; m_intent = std::forward<IntentT>(value); }
    template<typename IntentT = Aws::String>
    IntentDetectedDataDetails& WithIntent(IntentT&& value) { SetIntent(std::forward<IntentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the detected intent.</p>
     */
    inline const Aws::String& GetIntentId() const { return m_intentId; }
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }
    template<typename IntentIdT = Aws::String>
    void SetIntentId(IntentIdT&& value) { m_intentIdHasBeenSet = true; m_intentId = std::forward<IntentIdT>(value); }
    template<typename IntentIdT = Aws::String>
    IntentDetectedDataDetails& WithIntentId(IntentIdT&& value) { SetIntentId(std::forward<IntentIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_intent;
    bool m_intentHasBeenSet = false;

    Aws::String m_intentId;
    bool m_intentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
