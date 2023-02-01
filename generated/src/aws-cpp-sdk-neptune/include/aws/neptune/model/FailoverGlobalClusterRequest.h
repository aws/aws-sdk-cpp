/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class FailoverGlobalClusterRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API FailoverGlobalClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FailoverGlobalCluster"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Identifier of the Neptune global database that should be failed over. The
     * identifier is the unique key assigned by the user when the Neptune global
     * database was created. In other words, it's the name of the global database that
     * you want to fail over.</p> <p>Constraints: Must match the identifier of an
     * existing Neptune global database.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>Identifier of the Neptune global database that should be failed over. The
     * identifier is the unique key assigned by the user when the Neptune global
     * database was created. In other words, it's the name of the global database that
     * you want to fail over.</p> <p>Constraints: Must match the identifier of an
     * existing Neptune global database.</p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>Identifier of the Neptune global database that should be failed over. The
     * identifier is the unique key assigned by the user when the Neptune global
     * database was created. In other words, it's the name of the global database that
     * you want to fail over.</p> <p>Constraints: Must match the identifier of an
     * existing Neptune global database.</p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>Identifier of the Neptune global database that should be failed over. The
     * identifier is the unique key assigned by the user when the Neptune global
     * database was created. In other words, it's the name of the global database that
     * you want to fail over.</p> <p>Constraints: Must match the identifier of an
     * existing Neptune global database.</p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>Identifier of the Neptune global database that should be failed over. The
     * identifier is the unique key assigned by the user when the Neptune global
     * database was created. In other words, it's the name of the global database that
     * you want to fail over.</p> <p>Constraints: Must match the identifier of an
     * existing Neptune global database.</p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>Identifier of the Neptune global database that should be failed over. The
     * identifier is the unique key assigned by the user when the Neptune global
     * database was created. In other words, it's the name of the global database that
     * you want to fail over.</p> <p>Constraints: Must match the identifier of an
     * existing Neptune global database.</p>
     */
    inline FailoverGlobalClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>Identifier of the Neptune global database that should be failed over. The
     * identifier is the unique key assigned by the user when the Neptune global
     * database was created. In other words, it's the name of the global database that
     * you want to fail over.</p> <p>Constraints: Must match the identifier of an
     * existing Neptune global database.</p>
     */
    inline FailoverGlobalClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>Identifier of the Neptune global database that should be failed over. The
     * identifier is the unique key assigned by the user when the Neptune global
     * database was created. In other words, it's the name of the global database that
     * you want to fail over.</p> <p>Constraints: Must match the identifier of an
     * existing Neptune global database.</p>
     */
    inline FailoverGlobalClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the secondary Neptune DB cluster that you
     * want to promote to primary for the global database.</p>
     */
    inline const Aws::String& GetTargetDbClusterIdentifier() const{ return m_targetDbClusterIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secondary Neptune DB cluster that you
     * want to promote to primary for the global database.</p>
     */
    inline bool TargetDbClusterIdentifierHasBeenSet() const { return m_targetDbClusterIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secondary Neptune DB cluster that you
     * want to promote to primary for the global database.</p>
     */
    inline void SetTargetDbClusterIdentifier(const Aws::String& value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secondary Neptune DB cluster that you
     * want to promote to primary for the global database.</p>
     */
    inline void SetTargetDbClusterIdentifier(Aws::String&& value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secondary Neptune DB cluster that you
     * want to promote to primary for the global database.</p>
     */
    inline void SetTargetDbClusterIdentifier(const char* value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secondary Neptune DB cluster that you
     * want to promote to primary for the global database.</p>
     */
    inline FailoverGlobalClusterRequest& WithTargetDbClusterIdentifier(const Aws::String& value) { SetTargetDbClusterIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secondary Neptune DB cluster that you
     * want to promote to primary for the global database.</p>
     */
    inline FailoverGlobalClusterRequest& WithTargetDbClusterIdentifier(Aws::String&& value) { SetTargetDbClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secondary Neptune DB cluster that you
     * want to promote to primary for the global database.</p>
     */
    inline FailoverGlobalClusterRequest& WithTargetDbClusterIdentifier(const char* value) { SetTargetDbClusterIdentifier(value); return *this;}

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_targetDbClusterIdentifier;
    bool m_targetDbClusterIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
