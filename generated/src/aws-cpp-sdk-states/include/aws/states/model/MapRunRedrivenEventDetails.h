/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about a Map Run that was redriven.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/MapRunRedrivenEventDetails">AWS
   * API Reference</a></p>
   */
  class MapRunRedrivenEventDetails
  {
  public:
    AWS_SFN_API MapRunRedrivenEventDetails();
    AWS_SFN_API MapRunRedrivenEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API MapRunRedrivenEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run that was redriven.</p>
     */
    inline const Aws::String& GetMapRunArn() const{ return m_mapRunArn; }
    inline bool MapRunArnHasBeenSet() const { return m_mapRunArnHasBeenSet; }
    inline void SetMapRunArn(const Aws::String& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = value; }
    inline void SetMapRunArn(Aws::String&& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = std::move(value); }
    inline void SetMapRunArn(const char* value) { m_mapRunArnHasBeenSet = true; m_mapRunArn.assign(value); }
    inline MapRunRedrivenEventDetails& WithMapRunArn(const Aws::String& value) { SetMapRunArn(value); return *this;}
    inline MapRunRedrivenEventDetails& WithMapRunArn(Aws::String&& value) { SetMapRunArn(std::move(value)); return *this;}
    inline MapRunRedrivenEventDetails& WithMapRunArn(const char* value) { SetMapRunArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times the Map Run has been redriven at this point in the
     * execution's history including this event. The redrive count for a redriven Map
     * Run is always greater than 0.</p>
     */
    inline int GetRedriveCount() const{ return m_redriveCount; }
    inline bool RedriveCountHasBeenSet() const { return m_redriveCountHasBeenSet; }
    inline void SetRedriveCount(int value) { m_redriveCountHasBeenSet = true; m_redriveCount = value; }
    inline MapRunRedrivenEventDetails& WithRedriveCount(int value) { SetRedriveCount(value); return *this;}
    ///@}
  private:

    Aws::String m_mapRunArn;
    bool m_mapRunArnHasBeenSet = false;

    int m_redriveCount;
    bool m_redriveCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
