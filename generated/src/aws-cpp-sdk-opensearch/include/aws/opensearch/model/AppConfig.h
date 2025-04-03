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
   * <p>Configuration settings for an OpenSearch application. For more information,
   * see see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/application.html">Using
   * the OpenSearch user interface in Amazon OpenSearch Service</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AppConfig">AWS
   * API Reference</a></p>
   */
  class AppConfig
  {
  public:
    AWS_OPENSEARCHSERVICE_API AppConfig() = default;
    AWS_OPENSEARCHSERVICE_API AppConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AppConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration item to set, such as the admin role for the OpenSearch
     * application.</p>
     */
    inline AppConfigType GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(AppConfigType value) { m_keyHasBeenSet = true; m_key = value; }
    inline AppConfig& WithKey(AppConfigType value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value assigned to the configuration key, such as an IAM user ARN.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    AppConfig& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    AppConfigType m_key{AppConfigType::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
