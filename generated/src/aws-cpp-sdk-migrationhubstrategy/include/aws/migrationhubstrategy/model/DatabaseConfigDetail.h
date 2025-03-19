/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Configuration information used for assessing databases. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/DatabaseConfigDetail">AWS
   * API Reference</a></p>
   */
  class DatabaseConfigDetail
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseConfigDetail() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseConfigDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseConfigDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> AWS Secrets Manager key that holds the credentials that you use to connect
     * to a database. </p>
     */
    inline const Aws::String& GetSecretName() const { return m_secretName; }
    inline bool SecretNameHasBeenSet() const { return m_secretNameHasBeenSet; }
    template<typename SecretNameT = Aws::String>
    void SetSecretName(SecretNameT&& value) { m_secretNameHasBeenSet = true; m_secretName = std::forward<SecretNameT>(value); }
    template<typename SecretNameT = Aws::String>
    DatabaseConfigDetail& WithSecretName(SecretNameT&& value) { SetSecretName(std::forward<SecretNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretName;
    bool m_secretNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
