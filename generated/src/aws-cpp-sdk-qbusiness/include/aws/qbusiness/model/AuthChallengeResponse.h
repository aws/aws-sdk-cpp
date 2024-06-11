﻿/**
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
   * <p>Contains details of the authentication information received from a third
   * party authentication server in response to an authentication
   * challenge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AuthChallengeResponse">AWS
   * API Reference</a></p>
   */
  class AuthChallengeResponse
  {
  public:
    AWS_QBUSINESS_API AuthChallengeResponse();
    AWS_QBUSINESS_API AuthChallengeResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AuthChallengeResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mapping of key-value pairs in an authentication challenge response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseMap() const{ return m_responseMap; }
    inline bool ResponseMapHasBeenSet() const { return m_responseMapHasBeenSet; }
    inline void SetResponseMap(const Aws::Map<Aws::String, Aws::String>& value) { m_responseMapHasBeenSet = true; m_responseMap = value; }
    inline void SetResponseMap(Aws::Map<Aws::String, Aws::String>&& value) { m_responseMapHasBeenSet = true; m_responseMap = std::move(value); }
    inline AuthChallengeResponse& WithResponseMap(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseMap(value); return *this;}
    inline AuthChallengeResponse& WithResponseMap(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseMap(std::move(value)); return *this;}
    inline AuthChallengeResponse& AddResponseMap(const Aws::String& key, const Aws::String& value) { m_responseMapHasBeenSet = true; m_responseMap.emplace(key, value); return *this; }
    inline AuthChallengeResponse& AddResponseMap(Aws::String&& key, const Aws::String& value) { m_responseMapHasBeenSet = true; m_responseMap.emplace(std::move(key), value); return *this; }
    inline AuthChallengeResponse& AddResponseMap(const Aws::String& key, Aws::String&& value) { m_responseMapHasBeenSet = true; m_responseMap.emplace(key, std::move(value)); return *this; }
    inline AuthChallengeResponse& AddResponseMap(Aws::String&& key, Aws::String&& value) { m_responseMapHasBeenSet = true; m_responseMap.emplace(std::move(key), std::move(value)); return *this; }
    inline AuthChallengeResponse& AddResponseMap(const char* key, Aws::String&& value) { m_responseMapHasBeenSet = true; m_responseMap.emplace(key, std::move(value)); return *this; }
    inline AuthChallengeResponse& AddResponseMap(Aws::String&& key, const char* value) { m_responseMapHasBeenSet = true; m_responseMap.emplace(std::move(key), value); return *this; }
    inline AuthChallengeResponse& AddResponseMap(const char* key, const char* value) { m_responseMapHasBeenSet = true; m_responseMap.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_responseMap;
    bool m_responseMapHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
