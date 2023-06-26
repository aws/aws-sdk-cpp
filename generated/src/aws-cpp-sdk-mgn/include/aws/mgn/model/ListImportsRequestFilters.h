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
    AWS_MGN_API ListImportsRequestFilters();
    AWS_MGN_API ListImportsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ListImportsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List imports request filters import IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportIDs() const{ return m_importIDs; }

    /**
     * <p>List imports request filters import IDs.</p>
     */
    inline bool ImportIDsHasBeenSet() const { return m_importIDsHasBeenSet; }

    /**
     * <p>List imports request filters import IDs.</p>
     */
    inline void SetImportIDs(const Aws::Vector<Aws::String>& value) { m_importIDsHasBeenSet = true; m_importIDs = value; }

    /**
     * <p>List imports request filters import IDs.</p>
     */
    inline void SetImportIDs(Aws::Vector<Aws::String>&& value) { m_importIDsHasBeenSet = true; m_importIDs = std::move(value); }

    /**
     * <p>List imports request filters import IDs.</p>
     */
    inline ListImportsRequestFilters& WithImportIDs(const Aws::Vector<Aws::String>& value) { SetImportIDs(value); return *this;}

    /**
     * <p>List imports request filters import IDs.</p>
     */
    inline ListImportsRequestFilters& WithImportIDs(Aws::Vector<Aws::String>&& value) { SetImportIDs(std::move(value)); return *this;}

    /**
     * <p>List imports request filters import IDs.</p>
     */
    inline ListImportsRequestFilters& AddImportIDs(const Aws::String& value) { m_importIDsHasBeenSet = true; m_importIDs.push_back(value); return *this; }

    /**
     * <p>List imports request filters import IDs.</p>
     */
    inline ListImportsRequestFilters& AddImportIDs(Aws::String&& value) { m_importIDsHasBeenSet = true; m_importIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>List imports request filters import IDs.</p>
     */
    inline ListImportsRequestFilters& AddImportIDs(const char* value) { m_importIDsHasBeenSet = true; m_importIDs.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_importIDs;
    bool m_importIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
