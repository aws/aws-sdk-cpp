/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/ServerOsType.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Object containing details about the servers imported by Application
   * Discovery Service </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ServerSummary">AWS
   * API Reference</a></p>
   */
  class ServerSummary
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerSummary();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Type of operating system for the servers. </p>
     */
    inline const ServerOsType& GetServerOsType() const{ return m_serverOsType; }

    /**
     * <p> Type of operating system for the servers. </p>
     */
    inline bool ServerOsTypeHasBeenSet() const { return m_serverOsTypeHasBeenSet; }

    /**
     * <p> Type of operating system for the servers. </p>
     */
    inline void SetServerOsType(const ServerOsType& value) { m_serverOsTypeHasBeenSet = true; m_serverOsType = value; }

    /**
     * <p> Type of operating system for the servers. </p>
     */
    inline void SetServerOsType(ServerOsType&& value) { m_serverOsTypeHasBeenSet = true; m_serverOsType = std::move(value); }

    /**
     * <p> Type of operating system for the servers. </p>
     */
    inline ServerSummary& WithServerOsType(const ServerOsType& value) { SetServerOsType(value); return *this;}

    /**
     * <p> Type of operating system for the servers. </p>
     */
    inline ServerSummary& WithServerOsType(ServerOsType&& value) { SetServerOsType(std::move(value)); return *this;}


    /**
     * <p> Number of servers. </p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p> Number of servers. </p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p> Number of servers. </p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p> Number of servers. </p>
     */
    inline ServerSummary& WithCount(int value) { SetCount(value); return *this;}

  private:

    ServerOsType m_serverOsType;
    bool m_serverOsTypeHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
