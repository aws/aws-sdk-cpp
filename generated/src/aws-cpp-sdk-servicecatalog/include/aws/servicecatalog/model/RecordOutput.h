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
    AWS_SERVICECATALOG_API RecordOutput();
    AWS_SERVICECATALOG_API RecordOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API RecordOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output key.</p>
     */
    inline const Aws::String& GetOutputKey() const{ return m_outputKey; }
    inline bool OutputKeyHasBeenSet() const { return m_outputKeyHasBeenSet; }
    inline void SetOutputKey(const Aws::String& value) { m_outputKeyHasBeenSet = true; m_outputKey = value; }
    inline void SetOutputKey(Aws::String&& value) { m_outputKeyHasBeenSet = true; m_outputKey = std::move(value); }
    inline void SetOutputKey(const char* value) { m_outputKeyHasBeenSet = true; m_outputKey.assign(value); }
    inline RecordOutput& WithOutputKey(const Aws::String& value) { SetOutputKey(value); return *this;}
    inline RecordOutput& WithOutputKey(Aws::String&& value) { SetOutputKey(std::move(value)); return *this;}
    inline RecordOutput& WithOutputKey(const char* value) { SetOutputKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output value.</p>
     */
    inline const Aws::String& GetOutputValue() const{ return m_outputValue; }
    inline bool OutputValueHasBeenSet() const { return m_outputValueHasBeenSet; }
    inline void SetOutputValue(const Aws::String& value) { m_outputValueHasBeenSet = true; m_outputValue = value; }
    inline void SetOutputValue(Aws::String&& value) { m_outputValueHasBeenSet = true; m_outputValue = std::move(value); }
    inline void SetOutputValue(const char* value) { m_outputValueHasBeenSet = true; m_outputValue.assign(value); }
    inline RecordOutput& WithOutputValue(const Aws::String& value) { SetOutputValue(value); return *this;}
    inline RecordOutput& WithOutputValue(Aws::String&& value) { SetOutputValue(std::move(value)); return *this;}
    inline RecordOutput& WithOutputValue(const char* value) { SetOutputValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the output.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RecordOutput& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RecordOutput& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RecordOutput& WithDescription(const char* value) { SetDescription(value); return *this;}
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
