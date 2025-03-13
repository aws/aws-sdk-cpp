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
   * <p>List imports request filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListImportsRequestFilters">AWS
   * API Reference</a></p>
   */
  class ListImportsRequestFilters
  {
  public:
    AWS_MGN_API ListImportsRequestFilters() = default;
    AWS_MGN_API ListImportsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ListImportsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List imports request filters import IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportIDs() const { return m_importIDs; }
    inline bool ImportIDsHasBeenSet() const { return m_importIDsHasBeenSet; }
    template<typename ImportIDsT = Aws::Vector<Aws::String>>
    void SetImportIDs(ImportIDsT&& value) { m_importIDsHasBeenSet = true; m_importIDs = std::forward<ImportIDsT>(value); }
    template<typename ImportIDsT = Aws::Vector<Aws::String>>
    ListImportsRequestFilters& WithImportIDs(ImportIDsT&& value) { SetImportIDs(std::forward<ImportIDsT>(value)); return *this;}
    template<typename ImportIDsT = Aws::String>
    ListImportsRequestFilters& AddImportIDs(ImportIDsT&& value) { m_importIDsHasBeenSet = true; m_importIDs.emplace_back(std::forward<ImportIDsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_importIDs;
    bool m_importIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
