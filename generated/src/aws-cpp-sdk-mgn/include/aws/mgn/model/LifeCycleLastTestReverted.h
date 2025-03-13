/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Lifecycle last Test reverted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LifeCycleLastTestReverted">AWS
   * API Reference</a></p>
   */
  class LifeCycleLastTestReverted
  {
  public:
    AWS_MGN_API LifeCycleLastTestReverted() = default;
    AWS_MGN_API LifeCycleLastTestReverted(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API LifeCycleLastTestReverted& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lifecycle last Test reverted API call date and time.</p>
     */
    inline const Aws::String& GetApiCallDateTime() const { return m_apiCallDateTime; }
    inline bool ApiCallDateTimeHasBeenSet() const { return m_apiCallDateTimeHasBeenSet; }
    template<typename ApiCallDateTimeT = Aws::String>
    void SetApiCallDateTime(ApiCallDateTimeT&& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = std::forward<ApiCallDateTimeT>(value); }
    template<typename ApiCallDateTimeT = Aws::String>
    LifeCycleLastTestReverted& WithApiCallDateTime(ApiCallDateTimeT&& value) { SetApiCallDateTime(std::forward<ApiCallDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiCallDateTime;
    bool m_apiCallDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
