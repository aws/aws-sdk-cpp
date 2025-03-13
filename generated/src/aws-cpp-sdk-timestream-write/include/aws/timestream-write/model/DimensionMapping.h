/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DimensionMapping">AWS
   * API Reference</a></p>
   */
  class DimensionMapping
  {
  public:
    AWS_TIMESTREAMWRITE_API DimensionMapping() = default;
    AWS_TIMESTREAMWRITE_API DimensionMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API DimensionMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetSourceColumn() const { return m_sourceColumn; }
    inline bool SourceColumnHasBeenSet() const { return m_sourceColumnHasBeenSet; }
    template<typename SourceColumnT = Aws::String>
    void SetSourceColumn(SourceColumnT&& value) { m_sourceColumnHasBeenSet = true; m_sourceColumn = std::forward<SourceColumnT>(value); }
    template<typename SourceColumnT = Aws::String>
    DimensionMapping& WithSourceColumn(SourceColumnT&& value) { SetSourceColumn(std::forward<SourceColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p>
     */
    inline const Aws::String& GetDestinationColumn() const { return m_destinationColumn; }
    inline bool DestinationColumnHasBeenSet() const { return m_destinationColumnHasBeenSet; }
    template<typename DestinationColumnT = Aws::String>
    void SetDestinationColumn(DestinationColumnT&& value) { m_destinationColumnHasBeenSet = true; m_destinationColumn = std::forward<DestinationColumnT>(value); }
    template<typename DestinationColumnT = Aws::String>
    DimensionMapping& WithDestinationColumn(DestinationColumnT&& value) { SetDestinationColumn(std::forward<DestinationColumnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceColumn;
    bool m_sourceColumnHasBeenSet = false;

    Aws::String m_destinationColumn;
    bool m_destinationColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
