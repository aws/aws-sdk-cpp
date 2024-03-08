/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/Adapter.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Contains information about adapters used when analyzing a document, with each
   * adapter specified using an AdapterId and version</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AdaptersConfig">AWS
   * API Reference</a></p>
   */
  class AdaptersConfig
  {
  public:
    AWS_TEXTRACT_API AdaptersConfig();
    AWS_TEXTRACT_API AdaptersConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API AdaptersConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of adapters to be used when analyzing the specified document.</p>
     */
    inline const Aws::Vector<Adapter>& GetAdapters() const{ return m_adapters; }

    /**
     * <p>A list of adapters to be used when analyzing the specified document.</p>
     */
    inline bool AdaptersHasBeenSet() const { return m_adaptersHasBeenSet; }

    /**
     * <p>A list of adapters to be used when analyzing the specified document.</p>
     */
    inline void SetAdapters(const Aws::Vector<Adapter>& value) { m_adaptersHasBeenSet = true; m_adapters = value; }

    /**
     * <p>A list of adapters to be used when analyzing the specified document.</p>
     */
    inline void SetAdapters(Aws::Vector<Adapter>&& value) { m_adaptersHasBeenSet = true; m_adapters = std::move(value); }

    /**
     * <p>A list of adapters to be used when analyzing the specified document.</p>
     */
    inline AdaptersConfig& WithAdapters(const Aws::Vector<Adapter>& value) { SetAdapters(value); return *this;}

    /**
     * <p>A list of adapters to be used when analyzing the specified document.</p>
     */
    inline AdaptersConfig& WithAdapters(Aws::Vector<Adapter>&& value) { SetAdapters(std::move(value)); return *this;}

    /**
     * <p>A list of adapters to be used when analyzing the specified document.</p>
     */
    inline AdaptersConfig& AddAdapters(const Adapter& value) { m_adaptersHasBeenSet = true; m_adapters.push_back(value); return *this; }

    /**
     * <p>A list of adapters to be used when analyzing the specified document.</p>
     */
    inline AdaptersConfig& AddAdapters(Adapter&& value) { m_adaptersHasBeenSet = true; m_adapters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Adapter> m_adapters;
    bool m_adaptersHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
