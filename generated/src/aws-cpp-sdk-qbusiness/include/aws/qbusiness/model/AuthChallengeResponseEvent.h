/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>An authentication verification event response by a third party authentication
   * server to Amazon Q Business.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AuthChallengeResponseEvent">AWS
   * API Reference</a></p>
   */
  class AuthChallengeResponseEvent
  {
  public:
    AWS_QBUSINESS_API AuthChallengeResponseEvent() = default;
    AWS_QBUSINESS_API AuthChallengeResponseEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AuthChallengeResponseEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mapping of key-value pairs in an authentication challenge response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseMap() const { return m_responseMap; }
    inline bool ResponseMapHasBeenSet() const { return m_responseMapHasBeenSet; }
    template<typename ResponseMapT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseMap(ResponseMapT&& value) { m_responseMapHasBeenSet = true; m_responseMap = std::forward<ResponseMapT>(value); }
    template<typename ResponseMapT = Aws::Map<Aws::String, Aws::String>>
    AuthChallengeResponseEvent& WithResponseMap(ResponseMapT&& value) { SetResponseMap(std::forward<ResponseMapT>(value)); return *this;}
    template<typename ResponseMapKeyT = Aws::String, typename ResponseMapValueT = Aws::String>
    AuthChallengeResponseEvent& AddResponseMap(ResponseMapKeyT&& key, ResponseMapValueT&& value) {
      m_responseMapHasBeenSet = true; m_responseMap.emplace(std::forward<ResponseMapKeyT>(key), std::forward<ResponseMapValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_responseMap;
    bool m_responseMapHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
