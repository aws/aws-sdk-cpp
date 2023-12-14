/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/model/NeptuneImportOptions.h>
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
namespace NeptuneGraph
{
namespace Model
{

  /**
   * <p>Options for how to perform an import.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ImportOptions">AWS
   * API Reference</a></p>
   */
  class ImportOptions
  {
  public:
    AWS_NEPTUNEGRAPH_API ImportOptions();
    AWS_NEPTUNEGRAPH_API ImportOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API ImportOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Options for importing data from a Neptune database.</p>
     */
    inline const NeptuneImportOptions& GetNeptune() const{ return m_neptune; }

    /**
     * <p>Options for importing data from a Neptune database.</p>
     */
    inline bool NeptuneHasBeenSet() const { return m_neptuneHasBeenSet; }

    /**
     * <p>Options for importing data from a Neptune database.</p>
     */
    inline void SetNeptune(const NeptuneImportOptions& value) { m_neptuneHasBeenSet = true; m_neptune = value; }

    /**
     * <p>Options for importing data from a Neptune database.</p>
     */
    inline void SetNeptune(NeptuneImportOptions&& value) { m_neptuneHasBeenSet = true; m_neptune = std::move(value); }

    /**
     * <p>Options for importing data from a Neptune database.</p>
     */
    inline ImportOptions& WithNeptune(const NeptuneImportOptions& value) { SetNeptune(value); return *this;}

    /**
     * <p>Options for importing data from a Neptune database.</p>
     */
    inline ImportOptions& WithNeptune(NeptuneImportOptions&& value) { SetNeptune(std::move(value)); return *this;}

  private:

    NeptuneImportOptions m_neptune;
    bool m_neptuneHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
