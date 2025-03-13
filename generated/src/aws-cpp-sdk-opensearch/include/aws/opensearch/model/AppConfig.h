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
    AWS_OPENSEARCHSERVICE_API AppConfig() = default;
    AWS_OPENSEARCHSERVICE_API AppConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AppConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the item to configure, such as admin role for the OpenSearch
     * Application.</p>
     */
    inline AppConfigType GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(AppConfigType value) { m_keyHasBeenSet = true; m_key = value; }
    inline AppConfig& WithKey(AppConfigType value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the value to configure for the key, such as an IAM user ARN.</p>
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
