/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition for the identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Identifier">AWS
   * API Reference</a></p>
   */
  class Identifier
  {
  public:
    AWS_QUICKSIGHT_API Identifier();
    AWS_QUICKSIGHT_API Identifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Identifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identity of the identifier.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }
    inline Identifier& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}
    inline Identifier& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}
    inline Identifier& WithIdentity(const char* value) { SetIdentity(value); return *this;}
    ///@}
  private:

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
