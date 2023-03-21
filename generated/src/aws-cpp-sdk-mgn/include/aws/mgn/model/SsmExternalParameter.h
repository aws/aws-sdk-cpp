/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
   * <p>AWS Systems Manager Document external parameter.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SsmExternalParameter">AWS
   * API Reference</a></p>
   */
  class SsmExternalParameter
  {
  public:
    AWS_MGN_API SsmExternalParameter();
    AWS_MGN_API SsmExternalParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API SsmExternalParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>AWS Systems Manager Document external parameters dynamic path.</p>
     */
    inline const Aws::String& GetDynamicPath() const{ return m_dynamicPath; }

    /**
     * <p>AWS Systems Manager Document external parameters dynamic path.</p>
     */
    inline bool DynamicPathHasBeenSet() const { return m_dynamicPathHasBeenSet; }

    /**
     * <p>AWS Systems Manager Document external parameters dynamic path.</p>
     */
    inline void SetDynamicPath(const Aws::String& value) { m_dynamicPathHasBeenSet = true; m_dynamicPath = value; }

    /**
     * <p>AWS Systems Manager Document external parameters dynamic path.</p>
     */
    inline void SetDynamicPath(Aws::String&& value) { m_dynamicPathHasBeenSet = true; m_dynamicPath = std::move(value); }

    /**
     * <p>AWS Systems Manager Document external parameters dynamic path.</p>
     */
    inline void SetDynamicPath(const char* value) { m_dynamicPathHasBeenSet = true; m_dynamicPath.assign(value); }

    /**
     * <p>AWS Systems Manager Document external parameters dynamic path.</p>
     */
    inline SsmExternalParameter& WithDynamicPath(const Aws::String& value) { SetDynamicPath(value); return *this;}

    /**
     * <p>AWS Systems Manager Document external parameters dynamic path.</p>
     */
    inline SsmExternalParameter& WithDynamicPath(Aws::String&& value) { SetDynamicPath(std::move(value)); return *this;}

    /**
     * <p>AWS Systems Manager Document external parameters dynamic path.</p>
     */
    inline SsmExternalParameter& WithDynamicPath(const char* value) { SetDynamicPath(value); return *this;}

  private:

    Aws::String m_dynamicPath;
    bool m_dynamicPathHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
