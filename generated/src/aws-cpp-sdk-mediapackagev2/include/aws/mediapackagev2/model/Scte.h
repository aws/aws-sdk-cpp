/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/model/ScteFilter.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The SCTE configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/Scte">AWS
   * API Reference</a></p>
   */
  class Scte
  {
  public:
    AWS_MEDIAPACKAGEV2_API Scte();
    AWS_MEDIAPACKAGEV2_API Scte(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Scte& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SCTE-35 message types that you want to be treated as ad markers in the
     * output.</p>
     */
    inline const Aws::Vector<ScteFilter>& GetScteFilter() const{ return m_scteFilter; }

    /**
     * <p>The SCTE-35 message types that you want to be treated as ad markers in the
     * output.</p>
     */
    inline bool ScteFilterHasBeenSet() const { return m_scteFilterHasBeenSet; }

    /**
     * <p>The SCTE-35 message types that you want to be treated as ad markers in the
     * output.</p>
     */
    inline void SetScteFilter(const Aws::Vector<ScteFilter>& value) { m_scteFilterHasBeenSet = true; m_scteFilter = value; }

    /**
     * <p>The SCTE-35 message types that you want to be treated as ad markers in the
     * output.</p>
     */
    inline void SetScteFilter(Aws::Vector<ScteFilter>&& value) { m_scteFilterHasBeenSet = true; m_scteFilter = std::move(value); }

    /**
     * <p>The SCTE-35 message types that you want to be treated as ad markers in the
     * output.</p>
     */
    inline Scte& WithScteFilter(const Aws::Vector<ScteFilter>& value) { SetScteFilter(value); return *this;}

    /**
     * <p>The SCTE-35 message types that you want to be treated as ad markers in the
     * output.</p>
     */
    inline Scte& WithScteFilter(Aws::Vector<ScteFilter>&& value) { SetScteFilter(std::move(value)); return *this;}

    /**
     * <p>The SCTE-35 message types that you want to be treated as ad markers in the
     * output.</p>
     */
    inline Scte& AddScteFilter(const ScteFilter& value) { m_scteFilterHasBeenSet = true; m_scteFilter.push_back(value); return *this; }

    /**
     * <p>The SCTE-35 message types that you want to be treated as ad markers in the
     * output.</p>
     */
    inline Scte& AddScteFilter(ScteFilter&& value) { m_scteFilterHasBeenSet = true; m_scteFilter.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ScteFilter> m_scteFilter;
    bool m_scteFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
