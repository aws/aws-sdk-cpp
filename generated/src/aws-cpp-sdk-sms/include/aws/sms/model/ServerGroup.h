/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/Server.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Logical grouping of servers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerGroup">AWS API
   * Reference</a></p>
   */
  class ServerGroup
  {
  public:
    AWS_SMS_API ServerGroup();
    AWS_SMS_API ServerGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a server group.</p>
     */
    inline const Aws::String& GetServerGroupId() const{ return m_serverGroupId; }

    /**
     * <p>The ID of a server group.</p>
     */
    inline bool ServerGroupIdHasBeenSet() const { return m_serverGroupIdHasBeenSet; }

    /**
     * <p>The ID of a server group.</p>
     */
    inline void SetServerGroupId(const Aws::String& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = value; }

    /**
     * <p>The ID of a server group.</p>
     */
    inline void SetServerGroupId(Aws::String&& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = std::move(value); }

    /**
     * <p>The ID of a server group.</p>
     */
    inline void SetServerGroupId(const char* value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId.assign(value); }

    /**
     * <p>The ID of a server group.</p>
     */
    inline ServerGroup& WithServerGroupId(const Aws::String& value) { SetServerGroupId(value); return *this;}

    /**
     * <p>The ID of a server group.</p>
     */
    inline ServerGroup& WithServerGroupId(Aws::String&& value) { SetServerGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of a server group.</p>
     */
    inline ServerGroup& WithServerGroupId(const char* value) { SetServerGroupId(value); return *this;}


    /**
     * <p>The name of a server group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a server group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a server group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a server group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a server group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a server group.</p>
     */
    inline ServerGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a server group.</p>
     */
    inline ServerGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a server group.</p>
     */
    inline ServerGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The servers that belong to a server group.</p>
     */
    inline const Aws::Vector<Server>& GetServerList() const{ return m_serverList; }

    /**
     * <p>The servers that belong to a server group.</p>
     */
    inline bool ServerListHasBeenSet() const { return m_serverListHasBeenSet; }

    /**
     * <p>The servers that belong to a server group.</p>
     */
    inline void SetServerList(const Aws::Vector<Server>& value) { m_serverListHasBeenSet = true; m_serverList = value; }

    /**
     * <p>The servers that belong to a server group.</p>
     */
    inline void SetServerList(Aws::Vector<Server>&& value) { m_serverListHasBeenSet = true; m_serverList = std::move(value); }

    /**
     * <p>The servers that belong to a server group.</p>
     */
    inline ServerGroup& WithServerList(const Aws::Vector<Server>& value) { SetServerList(value); return *this;}

    /**
     * <p>The servers that belong to a server group.</p>
     */
    inline ServerGroup& WithServerList(Aws::Vector<Server>&& value) { SetServerList(std::move(value)); return *this;}

    /**
     * <p>The servers that belong to a server group.</p>
     */
    inline ServerGroup& AddServerList(const Server& value) { m_serverListHasBeenSet = true; m_serverList.push_back(value); return *this; }

    /**
     * <p>The servers that belong to a server group.</p>
     */
    inline ServerGroup& AddServerList(Server&& value) { m_serverListHasBeenSet = true; m_serverList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serverGroupId;
    bool m_serverGroupIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Server> m_serverList;
    bool m_serverListHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
