﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Used in UpdateNetworkRequest.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/IpPoolUpdateRequest">AWS
   * API Reference</a></p>
   */
  class IpPoolUpdateRequest
  {
  public:
    AWS_MEDIALIVE_API IpPoolUpdateRequest();
    AWS_MEDIALIVE_API IpPoolUpdateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API IpPoolUpdateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A CIDR block of IP addresses to reserve for MediaLive Anywhere.
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline IpPoolUpdateRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline IpPoolUpdateRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline IpPoolUpdateRequest& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
