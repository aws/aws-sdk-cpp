/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/ServiceId.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about a user recorded in segment documents.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/TraceUser">AWS API
   * Reference</a></p>
   */
  class TraceUser
  {
  public:
    AWS_XRAY_API TraceUser();
    AWS_XRAY_API TraceUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API TraceUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user's name.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline TraceUser& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline TraceUser& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline TraceUser& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Services that the user's request hit.</p>
     */
    inline const Aws::Vector<ServiceId>& GetServiceIds() const{ return m_serviceIds; }
    inline bool ServiceIdsHasBeenSet() const { return m_serviceIdsHasBeenSet; }
    inline void SetServiceIds(const Aws::Vector<ServiceId>& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = value; }
    inline void SetServiceIds(Aws::Vector<ServiceId>&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = std::move(value); }
    inline TraceUser& WithServiceIds(const Aws::Vector<ServiceId>& value) { SetServiceIds(value); return *this;}
    inline TraceUser& WithServiceIds(Aws::Vector<ServiceId>&& value) { SetServiceIds(std::move(value)); return *this;}
    inline TraceUser& AddServiceIds(const ServiceId& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }
    inline TraceUser& AddServiceIds(ServiceId&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::Vector<ServiceId> m_serviceIds;
    bool m_serviceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
