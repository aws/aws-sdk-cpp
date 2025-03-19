/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A read set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ExportReadSet">AWS
   * API Reference</a></p>
   */
  class ExportReadSet
  {
  public:
    AWS_OMICS_API ExportReadSet() = default;
    AWS_OMICS_API ExportReadSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ExportReadSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The set's ID.</p>
     */
    inline const Aws::String& GetReadSetId() const { return m_readSetId; }
    inline bool ReadSetIdHasBeenSet() const { return m_readSetIdHasBeenSet; }
    template<typename ReadSetIdT = Aws::String>
    void SetReadSetId(ReadSetIdT&& value) { m_readSetIdHasBeenSet = true; m_readSetId = std::forward<ReadSetIdT>(value); }
    template<typename ReadSetIdT = Aws::String>
    ExportReadSet& WithReadSetId(ReadSetIdT&& value) { SetReadSetId(std::forward<ReadSetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_readSetId;
    bool m_readSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
