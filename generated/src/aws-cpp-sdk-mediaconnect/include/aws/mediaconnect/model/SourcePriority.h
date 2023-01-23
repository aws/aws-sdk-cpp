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
   * The priority you want to assign to a source. You can have a primary stream and a
   * backup stream or two equally prioritized streams.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SourcePriority">AWS
   * API Reference</a></p>
   */
  class SourcePriority
  {
  public:
    AWS_MEDIACONNECT_API SourcePriority();
    AWS_MEDIACONNECT_API SourcePriority(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API SourcePriority& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The name of the source you choose as the primary source for this flow.
     */
    inline const Aws::String& GetPrimarySource() const{ return m_primarySource; }

    /**
     * The name of the source you choose as the primary source for this flow.
     */
    inline bool PrimarySourceHasBeenSet() const { return m_primarySourceHasBeenSet; }

    /**
     * The name of the source you choose as the primary source for this flow.
     */
    inline void SetPrimarySource(const Aws::String& value) { m_primarySourceHasBeenSet = true; m_primarySource = value; }

    /**
     * The name of the source you choose as the primary source for this flow.
     */
    inline void SetPrimarySource(Aws::String&& value) { m_primarySourceHasBeenSet = true; m_primarySource = std::move(value); }

    /**
     * The name of the source you choose as the primary source for this flow.
     */
    inline void SetPrimarySource(const char* value) { m_primarySourceHasBeenSet = true; m_primarySource.assign(value); }

    /**
     * The name of the source you choose as the primary source for this flow.
     */
    inline SourcePriority& WithPrimarySource(const Aws::String& value) { SetPrimarySource(value); return *this;}

    /**
     * The name of the source you choose as the primary source for this flow.
     */
    inline SourcePriority& WithPrimarySource(Aws::String&& value) { SetPrimarySource(std::move(value)); return *this;}

    /**
     * The name of the source you choose as the primary source for this flow.
     */
    inline SourcePriority& WithPrimarySource(const char* value) { SetPrimarySource(value); return *this;}

  private:

    Aws::String m_primarySource;
    bool m_primarySourceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
