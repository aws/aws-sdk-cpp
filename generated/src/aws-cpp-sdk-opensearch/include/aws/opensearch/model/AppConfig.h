/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AppConfigType.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Configurations of the OpenSearch Application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AppConfig">AWS
   * API Reference</a></p>
   */
  class AppConfig
  {
  public:
    AWS_OPENSEARCHSERVICE_API AppConfig();
    AWS_OPENSEARCHSERVICE_API AppConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AppConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the item to configure, such as admin role for the OpenSearch
     * Application.</p>
     */
    inline const AppConfigType& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const AppConfigType& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(AppConfigType&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline AppConfig& WithKey(const AppConfigType& value) { SetKey(value); return *this;}
    inline AppConfig& WithKey(AppConfigType&& value) { SetKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the value to configure for the key, such as an IAM user ARN.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline AppConfig& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline AppConfig& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline AppConfig& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    AppConfigType m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
