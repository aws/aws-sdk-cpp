/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The output for the product created as the result of a request. For example,
   * the output for a CloudFormation-backed product that creates an S3 bucket would
   * include the S3 bucket URL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/RecordOutput">AWS
   * API Reference</a></p>
   */
  class RecordOutput
  {
  public:
    AWS_SERVICECATALOG_API RecordOutput() = default;
    AWS_SERVICECATALOG_API RecordOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API RecordOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output key.</p>
     */
    inline const Aws::String& GetOutputKey() const { return m_outputKey; }
    inline bool OutputKeyHasBeenSet() const { return m_outputKeyHasBeenSet; }
    template<typename OutputKeyT = Aws::String>
    void SetOutputKey(OutputKeyT&& value) { m_outputKeyHasBeenSet = true; m_outputKey = std::forward<OutputKeyT>(value); }
    template<typename OutputKeyT = Aws::String>
    RecordOutput& WithOutputKey(OutputKeyT&& value) { SetOutputKey(std::forward<OutputKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output value.</p>
     */
    inline const Aws::String& GetOutputValue() const { return m_outputValue; }
    inline bool OutputValueHasBeenSet() const { return m_outputValueHasBeenSet; }
    template<typename OutputValueT = Aws::String>
    void SetOutputValue(OutputValueT&& value) { m_outputValueHasBeenSet = true; m_outputValue = std::forward<OutputValueT>(value); }
    template<typename OutputValueT = Aws::String>
    RecordOutput& WithOutputValue(OutputValueT&& value) { SetOutputValue(std::forward<OutputValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the output.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RecordOutput& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputKey;
    bool m_outputKeyHasBeenSet = false;

    Aws::String m_outputValue;
    bool m_outputValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
