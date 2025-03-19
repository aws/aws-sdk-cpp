/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The current DynamoDB Streams configuration for the table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableStreamSpecification">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableStreamSpecification
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableStreamSpecification() = default;
    AWS_SECURITYHUB_API AwsDynamoDbTableStreamSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableStreamSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether DynamoDB Streams is enabled on the table.</p>
     */
    inline bool GetStreamEnabled() const { return m_streamEnabled; }
    inline bool StreamEnabledHasBeenSet() const { return m_streamEnabledHasBeenSet; }
    inline void SetStreamEnabled(bool value) { m_streamEnabledHasBeenSet = true; m_streamEnabled = value; }
    inline AwsDynamoDbTableStreamSpecification& WithStreamEnabled(bool value) { SetStreamEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the information that is written to the table.</p>
     */
    inline const Aws::String& GetStreamViewType() const { return m_streamViewType; }
    inline bool StreamViewTypeHasBeenSet() const { return m_streamViewTypeHasBeenSet; }
    template<typename StreamViewTypeT = Aws::String>
    void SetStreamViewType(StreamViewTypeT&& value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = std::forward<StreamViewTypeT>(value); }
    template<typename StreamViewTypeT = Aws::String>
    AwsDynamoDbTableStreamSpecification& WithStreamViewType(StreamViewTypeT&& value) { SetStreamViewType(std::forward<StreamViewTypeT>(value)); return *this;}
    ///@}
  private:

    bool m_streamEnabled{false};
    bool m_streamEnabledHasBeenSet = false;

    Aws::String m_streamViewType;
    bool m_streamViewTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
