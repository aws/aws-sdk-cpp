/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Describes a path match type. Each rule can include only one of the following
   * types of paths.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/PathMatchType">AWS
   * API Reference</a></p>
   */
  class PathMatchType
  {
  public:
    AWS_VPCLATTICE_API PathMatchType();
    AWS_VPCLATTICE_API PathMatchType(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API PathMatchType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An exact match of the path.</p>
     */
    inline const Aws::String& GetExact() const{ return m_exact; }

    /**
     * <p>An exact match of the path.</p>
     */
    inline bool ExactHasBeenSet() const { return m_exactHasBeenSet; }

    /**
     * <p>An exact match of the path.</p>
     */
    inline void SetExact(const Aws::String& value) { m_exactHasBeenSet = true; m_exact = value; }

    /**
     * <p>An exact match of the path.</p>
     */
    inline void SetExact(Aws::String&& value) { m_exactHasBeenSet = true; m_exact = std::move(value); }

    /**
     * <p>An exact match of the path.</p>
     */
    inline void SetExact(const char* value) { m_exactHasBeenSet = true; m_exact.assign(value); }

    /**
     * <p>An exact match of the path.</p>
     */
    inline PathMatchType& WithExact(const Aws::String& value) { SetExact(value); return *this;}

    /**
     * <p>An exact match of the path.</p>
     */
    inline PathMatchType& WithExact(Aws::String&& value) { SetExact(std::move(value)); return *this;}

    /**
     * <p>An exact match of the path.</p>
     */
    inline PathMatchType& WithExact(const char* value) { SetExact(value); return *this;}


    /**
     * <p>A prefix match of the path.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>A prefix match of the path.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>A prefix match of the path.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>A prefix match of the path.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>A prefix match of the path.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>A prefix match of the path.</p>
     */
    inline PathMatchType& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>A prefix match of the path.</p>
     */
    inline PathMatchType& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>A prefix match of the path.</p>
     */
    inline PathMatchType& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_exact;
    bool m_exactHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
