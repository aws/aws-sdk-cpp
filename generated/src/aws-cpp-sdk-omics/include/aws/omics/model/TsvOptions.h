/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ReadOptions.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Formatting options for a TSV file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/TsvOptions">AWS
   * API Reference</a></p>
   */
  class TsvOptions
  {
  public:
    AWS_OMICS_API TsvOptions() = default;
    AWS_OMICS_API TsvOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API TsvOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file's read options.</p>
     */
    inline const ReadOptions& GetReadOptions() const { return m_readOptions; }
    inline bool ReadOptionsHasBeenSet() const { return m_readOptionsHasBeenSet; }
    template<typename ReadOptionsT = ReadOptions>
    void SetReadOptions(ReadOptionsT&& value) { m_readOptionsHasBeenSet = true; m_readOptions = std::forward<ReadOptionsT>(value); }
    template<typename ReadOptionsT = ReadOptions>
    TsvOptions& WithReadOptions(ReadOptionsT&& value) { SetReadOptions(std::forward<ReadOptionsT>(value)); return *this;}
    ///@}
  private:

    ReadOptions m_readOptions;
    bool m_readOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
