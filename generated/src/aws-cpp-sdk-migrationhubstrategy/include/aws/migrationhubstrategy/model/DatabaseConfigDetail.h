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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseConfigDetail();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseConfigDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseConfigDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> AWS Secrets Manager key that holds the credentials that you use to connect
     * to a database. </p>
     */
    inline const Aws::String& GetSecretName() const{ return m_secretName; }

    /**
     * <p> AWS Secrets Manager key that holds the credentials that you use to connect
     * to a database. </p>
     */
    inline bool SecretNameHasBeenSet() const { return m_secretNameHasBeenSet; }

    /**
     * <p> AWS Secrets Manager key that holds the credentials that you use to connect
     * to a database. </p>
     */
    inline void SetSecretName(const Aws::String& value) { m_secretNameHasBeenSet = true; m_secretName = value; }

    /**
     * <p> AWS Secrets Manager key that holds the credentials that you use to connect
     * to a database. </p>
     */
    inline void SetSecretName(Aws::String&& value) { m_secretNameHasBeenSet = true; m_secretName = std::move(value); }

    /**
     * <p> AWS Secrets Manager key that holds the credentials that you use to connect
     * to a database. </p>
     */
    inline void SetSecretName(const char* value) { m_secretNameHasBeenSet = true; m_secretName.assign(value); }

    /**
     * <p> AWS Secrets Manager key that holds the credentials that you use to connect
     * to a database. </p>
     */
    inline DatabaseConfigDetail& WithSecretName(const Aws::String& value) { SetSecretName(value); return *this;}

    /**
     * <p> AWS Secrets Manager key that holds the credentials that you use to connect
     * to a database. </p>
     */
    inline DatabaseConfigDetail& WithSecretName(Aws::String&& value) { SetSecretName(std::move(value)); return *this;}

    /**
     * <p> AWS Secrets Manager key that holds the credentials that you use to connect
     * to a database. </p>
     */
    inline DatabaseConfigDetail& WithSecretName(const char* value) { SetSecretName(value); return *this;}

  private:

    Aws::String m_secretName;
    bool m_secretNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
