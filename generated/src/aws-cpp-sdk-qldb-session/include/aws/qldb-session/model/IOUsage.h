/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>

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
namespace QLDBSession
{
namespace Model
{

  /**
   * <p>Contains I/O usage metrics for a command that was invoked.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/IOUsage">AWS
   * API Reference</a></p>
   */
  class IOUsage
  {
  public:
    AWS_QLDBSESSION_API IOUsage();
    AWS_QLDBSESSION_API IOUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API IOUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of read I/O requests that the command made.</p>
     */
    inline long long GetReadIOs() const{ return m_readIOs; }

    /**
     * <p>The number of read I/O requests that the command made.</p>
     */
    inline bool ReadIOsHasBeenSet() const { return m_readIOsHasBeenSet; }

    /**
     * <p>The number of read I/O requests that the command made.</p>
     */
    inline void SetReadIOs(long long value) { m_readIOsHasBeenSet = true; m_readIOs = value; }

    /**
     * <p>The number of read I/O requests that the command made.</p>
     */
    inline IOUsage& WithReadIOs(long long value) { SetReadIOs(value); return *this;}


    /**
     * <p>The number of write I/O requests that the command made.</p>
     */
    inline long long GetWriteIOs() const{ return m_writeIOs; }

    /**
     * <p>The number of write I/O requests that the command made.</p>
     */
    inline bool WriteIOsHasBeenSet() const { return m_writeIOsHasBeenSet; }

    /**
     * <p>The number of write I/O requests that the command made.</p>
     */
    inline void SetWriteIOs(long long value) { m_writeIOsHasBeenSet = true; m_writeIOs = value; }

    /**
     * <p>The number of write I/O requests that the command made.</p>
     */
    inline IOUsage& WithWriteIOs(long long value) { SetWriteIOs(value); return *this;}

  private:

    long long m_readIOs;
    bool m_readIOsHasBeenSet = false;

    long long m_writeIOs;
    bool m_writeIOsHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
