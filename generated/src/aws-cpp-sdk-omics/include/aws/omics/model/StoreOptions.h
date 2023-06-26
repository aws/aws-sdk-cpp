/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/TsvStoreOptions.h>
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
   * <p>Settings for a store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StoreOptions">AWS
   * API Reference</a></p>
   */
  class StoreOptions
  {
  public:
    AWS_OMICS_API StoreOptions();
    AWS_OMICS_API StoreOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API StoreOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>File settings for a TSV store.</p>
     */
    inline const TsvStoreOptions& GetTsvStoreOptions() const{ return m_tsvStoreOptions; }

    /**
     * <p>File settings for a TSV store.</p>
     */
    inline bool TsvStoreOptionsHasBeenSet() const { return m_tsvStoreOptionsHasBeenSet; }

    /**
     * <p>File settings for a TSV store.</p>
     */
    inline void SetTsvStoreOptions(const TsvStoreOptions& value) { m_tsvStoreOptionsHasBeenSet = true; m_tsvStoreOptions = value; }

    /**
     * <p>File settings for a TSV store.</p>
     */
    inline void SetTsvStoreOptions(TsvStoreOptions&& value) { m_tsvStoreOptionsHasBeenSet = true; m_tsvStoreOptions = std::move(value); }

    /**
     * <p>File settings for a TSV store.</p>
     */
    inline StoreOptions& WithTsvStoreOptions(const TsvStoreOptions& value) { SetTsvStoreOptions(value); return *this;}

    /**
     * <p>File settings for a TSV store.</p>
     */
    inline StoreOptions& WithTsvStoreOptions(TsvStoreOptions&& value) { SetTsvStoreOptions(std::move(value)); return *this;}

  private:

    TsvStoreOptions m_tsvStoreOptions;
    bool m_tsvStoreOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
