/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>List exports request filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListExportsRequestFilters">AWS
   * API Reference</a></p>
   */
  class ListExportsRequestFilters
  {
  public:
    AWS_MGN_API ListExportsRequestFilters();
    AWS_MGN_API ListExportsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ListExportsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List exports request filters export ids.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportIDs() const{ return m_exportIDs; }
    inline bool ExportIDsHasBeenSet() const { return m_exportIDsHasBeenSet; }
    inline void SetExportIDs(const Aws::Vector<Aws::String>& value) { m_exportIDsHasBeenSet = true; m_exportIDs = value; }
    inline void SetExportIDs(Aws::Vector<Aws::String>&& value) { m_exportIDsHasBeenSet = true; m_exportIDs = std::move(value); }
    inline ListExportsRequestFilters& WithExportIDs(const Aws::Vector<Aws::String>& value) { SetExportIDs(value); return *this;}
    inline ListExportsRequestFilters& WithExportIDs(Aws::Vector<Aws::String>&& value) { SetExportIDs(std::move(value)); return *this;}
    inline ListExportsRequestFilters& AddExportIDs(const Aws::String& value) { m_exportIDsHasBeenSet = true; m_exportIDs.push_back(value); return *this; }
    inline ListExportsRequestFilters& AddExportIDs(Aws::String&& value) { m_exportIDsHasBeenSet = true; m_exportIDs.push_back(std::move(value)); return *this; }
    inline ListExportsRequestFilters& AddExportIDs(const char* value) { m_exportIDsHasBeenSet = true; m_exportIDs.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_exportIDs;
    bool m_exportIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
