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
    AWS_SMS_API ServerGroup() = default;
    AWS_SMS_API ServerGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a server group.</p>
     */
    inline const Aws::String& GetServerGroupId() const { return m_serverGroupId; }
    inline bool ServerGroupIdHasBeenSet() const { return m_serverGroupIdHasBeenSet; }
    template<typename ServerGroupIdT = Aws::String>
    void SetServerGroupId(ServerGroupIdT&& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = std::forward<ServerGroupIdT>(value); }
    template<typename ServerGroupIdT = Aws::String>
    ServerGroup& WithServerGroupId(ServerGroupIdT&& value) { SetServerGroupId(std::forward<ServerGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a server group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ServerGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The servers that belong to a server group.</p>
     */
    inline const Aws::Vector<Server>& GetServerList() const { return m_serverList; }
    inline bool ServerListHasBeenSet() const { return m_serverListHasBeenSet; }
    template<typename ServerListT = Aws::Vector<Server>>
    void SetServerList(ServerListT&& value) { m_serverListHasBeenSet = true; m_serverList = std::forward<ServerListT>(value); }
    template<typename ServerListT = Aws::Vector<Server>>
    ServerGroup& WithServerList(ServerListT&& value) { SetServerList(std::forward<ServerListT>(value)); return *this;}
    template<typename ServerListT = Server>
    ServerGroup& AddServerList(ServerListT&& value) { m_serverListHasBeenSet = true; m_serverList.emplace_back(std::forward<ServerListT>(value)); return *this; }
    ///@}
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
