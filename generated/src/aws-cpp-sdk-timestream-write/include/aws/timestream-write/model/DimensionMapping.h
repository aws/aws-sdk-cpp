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
    AWS_TIMESTREAMWRITE_API DimensionMapping();
    AWS_TIMESTREAMWRITE_API DimensionMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API DimensionMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetSourceColumn() const{ return m_sourceColumn; }
    inline bool SourceColumnHasBeenSet() const { return m_sourceColumnHasBeenSet; }
    inline void SetSourceColumn(const Aws::String& value) { m_sourceColumnHasBeenSet = true; m_sourceColumn = value; }
    inline void SetSourceColumn(Aws::String&& value) { m_sourceColumnHasBeenSet = true; m_sourceColumn = std::move(value); }
    inline void SetSourceColumn(const char* value) { m_sourceColumnHasBeenSet = true; m_sourceColumn.assign(value); }
    inline DimensionMapping& WithSourceColumn(const Aws::String& value) { SetSourceColumn(value); return *this;}
    inline DimensionMapping& WithSourceColumn(Aws::String&& value) { SetSourceColumn(std::move(value)); return *this;}
    inline DimensionMapping& WithSourceColumn(const char* value) { SetSourceColumn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p>
     */
    inline const Aws::String& GetDestinationColumn() const{ return m_destinationColumn; }
    inline bool DestinationColumnHasBeenSet() const { return m_destinationColumnHasBeenSet; }
    inline void SetDestinationColumn(const Aws::String& value) { m_destinationColumnHasBeenSet = true; m_destinationColumn = value; }
    inline void SetDestinationColumn(Aws::String&& value) { m_destinationColumnHasBeenSet = true; m_destinationColumn = std::move(value); }
    inline void SetDestinationColumn(const char* value) { m_destinationColumnHasBeenSet = true; m_destinationColumn.assign(value); }
    inline DimensionMapping& WithDestinationColumn(const Aws::String& value) { SetDestinationColumn(value); return *this;}
    inline DimensionMapping& WithDestinationColumn(Aws::String&& value) { SetDestinationColumn(std::move(value)); return *this;}
    inline DimensionMapping& WithDestinationColumn(const char* value) { SetDestinationColumn(value); return *this;}
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
