/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration specifying how to treat different headers. If no headers are
   * specified Amazon SageMaker AI will by default base64 encode when capturing the
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CaptureContentTypeHeader">AWS
   * API Reference</a></p>
   */
  class CaptureContentTypeHeader
  {
  public:
    AWS_SAGEMAKER_API CaptureContentTypeHeader() = default;
    AWS_SAGEMAKER_API CaptureContentTypeHeader(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CaptureContentTypeHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of all content type headers that Amazon SageMaker AI will treat as
     * CSV and capture accordingly.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCsvContentTypes() const { return m_csvContentTypes; }
    inline bool CsvContentTypesHasBeenSet() const { return m_csvContentTypesHasBeenSet; }
    template<typename CsvContentTypesT = Aws::Vector<Aws::String>>
    void SetCsvContentTypes(CsvContentTypesT&& value) { m_csvContentTypesHasBeenSet = true; m_csvContentTypes = std::forward<CsvContentTypesT>(value); }
    template<typename CsvContentTypesT = Aws::Vector<Aws::String>>
    CaptureContentTypeHeader& WithCsvContentTypes(CsvContentTypesT&& value) { SetCsvContentTypes(std::forward<CsvContentTypesT>(value)); return *this;}
    template<typename CsvContentTypesT = Aws::String>
    CaptureContentTypeHeader& AddCsvContentTypes(CsvContentTypesT&& value) { m_csvContentTypesHasBeenSet = true; m_csvContentTypes.emplace_back(std::forward<CsvContentTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of all content type headers that SageMaker AI will treat as JSON and
     * capture accordingly.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJsonContentTypes() const { return m_jsonContentTypes; }
    inline bool JsonContentTypesHasBeenSet() const { return m_jsonContentTypesHasBeenSet; }
    template<typename JsonContentTypesT = Aws::Vector<Aws::String>>
    void SetJsonContentTypes(JsonContentTypesT&& value) { m_jsonContentTypesHasBeenSet = true; m_jsonContentTypes = std::forward<JsonContentTypesT>(value); }
    template<typename JsonContentTypesT = Aws::Vector<Aws::String>>
    CaptureContentTypeHeader& WithJsonContentTypes(JsonContentTypesT&& value) { SetJsonContentTypes(std::forward<JsonContentTypesT>(value)); return *this;}
    template<typename JsonContentTypesT = Aws::String>
    CaptureContentTypeHeader& AddJsonContentTypes(JsonContentTypesT&& value) { m_jsonContentTypesHasBeenSet = true; m_jsonContentTypes.emplace_back(std::forward<JsonContentTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_csvContentTypes;
    bool m_csvContentTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_jsonContentTypes;
    bool m_jsonContentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
