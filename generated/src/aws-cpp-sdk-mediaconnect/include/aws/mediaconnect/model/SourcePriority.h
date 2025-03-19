/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> The priority you want to assign to a source. You can have a primary stream
   * and a backup stream or two equally prioritized streams. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SourcePriority">AWS
   * API Reference</a></p>
   */
  class SourcePriority
  {
  public:
    AWS_MEDIACONNECT_API SourcePriority() = default;
    AWS_MEDIACONNECT_API SourcePriority(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API SourcePriority& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the source you choose as the primary source for this flow.</p>
     */
    inline const Aws::String& GetPrimarySource() const { return m_primarySource; }
    inline bool PrimarySourceHasBeenSet() const { return m_primarySourceHasBeenSet; }
    template<typename PrimarySourceT = Aws::String>
    void SetPrimarySource(PrimarySourceT&& value) { m_primarySourceHasBeenSet = true; m_primarySource = std::forward<PrimarySourceT>(value); }
    template<typename PrimarySourceT = Aws::String>
    SourcePriority& WithPrimarySource(PrimarySourceT&& value) { SetPrimarySource(std::forward<PrimarySourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_primarySource;
    bool m_primarySourceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
