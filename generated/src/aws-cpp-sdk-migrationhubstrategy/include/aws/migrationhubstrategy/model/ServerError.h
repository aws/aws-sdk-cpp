﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/ServerErrorCategory.h>
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
   * <p>The error in server analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ServerError">AWS
   * API Reference</a></p>
   */
  class ServerError
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerError() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerError(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error category of server analysis.</p>
     */
    inline ServerErrorCategory GetServerErrorCategory() const { return m_serverErrorCategory; }
    inline bool ServerErrorCategoryHasBeenSet() const { return m_serverErrorCategoryHasBeenSet; }
    inline void SetServerErrorCategory(ServerErrorCategory value) { m_serverErrorCategoryHasBeenSet = true; m_serverErrorCategory = value; }
    inline ServerError& WithServerErrorCategory(ServerErrorCategory value) { SetServerErrorCategory(value); return *this;}
    ///@}
  private:

    ServerErrorCategory m_serverErrorCategory{ServerErrorCategory::NOT_SET};
    bool m_serverErrorCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
