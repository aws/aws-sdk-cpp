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
   * <p>Information about the Amazon Q intent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/IntentInputData">AWS
   * API Reference</a></p>
   */
  class IntentInputData
  {
  public:
    AWS_QCONNECT_API IntentInputData() = default;
    AWS_QCONNECT_API IntentInputData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API IntentInputData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Q intent.</p>
     */
    inline const Aws::String& GetIntentId() const { return m_intentId; }
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }
    template<typename IntentIdT = Aws::String>
    void SetIntentId(IntentIdT&& value) { m_intentIdHasBeenSet = true; m_intentId = std::forward<IntentIdT>(value); }
    template<typename IntentIdT = Aws::String>
    IntentInputData& WithIntentId(IntentIdT&& value) { SetIntentId(std::forward<IntentIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_intentId;
    bool m_intentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
